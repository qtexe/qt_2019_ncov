#include "dialog.h"
#include "ui_dialog.h"

//JSON数据解析
int Dialog::dataParse(QByteArray str)
{
    QJsonParseError err_rpt;
    QJsonDocument root_Doc = QJsonDocument::fromJson(str, &err_rpt);
//    qDebug() << "ok ";
    if(err_rpt.error != QJsonParseError::NoError)
    {
        file->remove();
        emit on_btn_update_clicked();
        qDebug() << "JSON格式错误";
//        return -1;
    }
//    qDebug() << "JSON格式正确";
    if(root_Doc.isObject())
    {
        QJsonObject root_obj = root_Doc.object();   //创建JSON对象，不是字符串
        if(root_obj.contains("data"))
        {
//            qDebug() << root_obj.value("ret").toString();
            //腾讯api的data是一个字符串
            QString data_str = root_obj.value("data").toString();
            QJsonObject data_obj = QJsonDocument::fromJson(data_str.toUtf8(),&err_rpt).object();

            //网易api的data是一个对象
//            QJsonObject data_obj = root_obj.value("data").toObject();

            QJsonObject chinaTotal = data_obj.value("chinaTotal").toObject();
            QJsonObject chinaAdd = data_obj.value("chinaAdd").toObject();
            getTotalAddData(chinaTotal, chinaAdd);  //全国累计和新增数据显示

            QString lastUpdateTime = data_obj.value("lastUpdateTime").toString();
            ui->lbe_update_time->setText(lastUpdateTime);

            QJsonArray areaTree_obj = data_obj.value("areaTree").toArray();
            QJsonObject chinaTree_obj = areaTree_obj.at(0).toObject();     //第0个是中国
//            qDebug() << "chinaTree";
            chinaTreeParse(chinaTree_obj);
//            qDebug() << "conutryTree";
            countryTreeParse(areaTree_obj);

            QJsonArray chinaDayListObj = data_obj.value("chinaDayList").toArray();
//            qDebug() << "chinaDayList";
            chinaDayListParse(chinaDayListObj);

            QJsonArray chinaDayAddListObj = data_obj.value("chinaDayAddList").toArray();
//            qDebug() << "chinaDayAddList";
            chinaDayAddListParse(chinaDayAddListObj);

            //新闻解析
            QJsonArray articleArr = data_obj.value("articleList").toArray();
//            qDebug() << "article";
            articleParse(articleArr);
//            qDebug() << "article ok";
            disInfo("更新成功");
            connect(ui->widget_chart, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(widget_chart_event(QMouseEvent*)));

            connect(ui->btn_group, SIGNAL(buttonClicked(int)), this, SLOT(drawCharts(int)));
//            connect(ui->rb_group, SIGNAL(buttonClicked(int)), this, SLOT(drawCharts(int)));

            //默认绘制
            setSelectStyle(0);
//            qDebug() << "DrawLine";
            clickId = 0;     //修复当点击死亡率按钮之后，再更新按钮，此时tip单位还是%的BUG
            widgetDrawLine(ui->widget_chart, "新增疑似/确诊趋势", "新增确诊", "新增疑似",
                clr1_1, clr1_2, AddDate, AddConfirmDub, AddSuspectDub);
        }
        qDebug() << "疫情数据更新成功";
//        ui->btn_update->setEnabled(true);
    }
    else
        qDebug() << "更新失败";
    return 0;
}

//累计确诊/疑似/死亡/治愈
void Dialog::chinaDayListParse(QJsonArray chinaDayListObj)
{
    //累计数量从1.13开始统计
//    size = getDay("20200113");

    uint16_t arraySize = chinaDayListObj.size();
//    qDebug() << arraySize;
    //size设置必须放在clear之前，可省略
    TotalDate.clear();
    TotalConfirmDub.clear();
    TotalSuspectDub.clear();
    TotalDeadDub.clear();
    TotalHealDub.clear();

    RateDate.clear();
    chinaDayListHealRate.clear();       //累计治愈率，从1.20开始
    chinaDayListDeadRate.clear();       //累计死亡率，从1.20开始

    for(int i = 0; i < arraySize; i++)
    {
        QJsonObject chinaDay = chinaDayListObj.at(i).toObject();

        QString date = chinaDay.value("date").toString();
        double deadRate = chinaDay.value("deadRate").toString().toDouble();
        double healRate = chinaDay.value("healRate").toString().toDouble();

        TotalDate << date;

        if(i >= 7)  //从1.20开始输出
        {
            chinaDayListHealRate << healRate;
            chinaDayListDeadRate << deadRate;
            RateDate << date;
//            qDebug() << deadRate << healRate;
        }

        double confirm = chinaDay.value("confirm").toDouble();
        double suspect = chinaDay.value("suspect").toDouble();
        double dead = chinaDay.value("dead").toDouble();
        double heal = chinaDay.value("heal").toDouble();

        TotalConfirmDub << confirm;
        TotalSuspectDub << suspect;
        TotalDeadDub << dead;
        TotalHealDub << heal;
    }
}

//新增确诊/疑似/死亡/治愈
void Dialog::chinaDayAddListParse(QJsonArray chinaDayAddListObj)
{
    uint16_t arraySize = chinaDayAddListObj.size();
//    qDebug() << arraySize;
    //size设置必须放在clear之前，可省略
    AddDate.clear();
    AddConfirmDub.clear();
    AddSuspectDub.clear();
    AddDeadDub.clear();
    AddHealDub.clear();

    for(int i = 0; i < arraySize; i++)
    {
        QJsonObject chinaDay = chinaDayAddListObj.at(i).toObject();
        QString date = chinaDay.value("date").toString();
        AddDate << date;

        double confirm = chinaDay.value("confirm").toDouble();
        double suspect = chinaDay.value("suspect").toDouble();
        double dead = chinaDay.value("dead").toDouble();
        double heal = chinaDay.value("heal").toDouble();

        AddConfirmDub << confirm;
        AddSuspectDub << suspect;
        AddDeadDub << dead;
        AddHealDub << heal;

        if(i == arraySize - 1)
            ui->lbe_add_suspect->setText("+" + QString::number(AddSuspectDub[arraySize-1]));
    }
}
//中国疫情数据解析
void Dialog::chinaTreeParse(QJsonObject chinaTree)
{
    QString chinaName = chinaTree.value("name").toString();

    QJsonObject chinaTotal_obj = chinaTree.value("total").toObject();
    //中国累计
    QString chinaTotalConfirm = QString::number(chinaTotal_obj.value("confirm").toInt());    //28130;
    QString chinaTotalSuspect = QString::number(chinaTotal_obj.value("suspect").toInt());    //0;
    QString chinaTotalDead    = QString::number(chinaTotal_obj.value("dead").toInt());        //564
    QString chinaTotalHeal    = QString::number(chinaTotal_obj.value("heal").toInt());        //1301
//    ui->tb_info_2->setText(chinaName);

//    qDebug() << chinaName << chinaTotalConfirm << chinaTotalSuspect << chinaTotalHeal << chinaTotalDead;;

    QJsonArray provinces_obj = chinaTree.value("children").toArray();    //包含所有的省份

    uint16_t provinceSize = provinces_obj.size();
//    qDebug() << provinceSize;       //省份个数34
    ui->tree->clear();
    ui->tree->sortByColumn(2, Qt::DescendingOrder);      //累计确诊排序

    for(int i = 0; i < provinceSize; i++)   //0-33
    {
        QJsonObject province_obj = provinces_obj.at(i).toObject();      //0:湖北省
        dataAddTree(province_obj);
        // 0       1        2        3       4
        //省市  新增确诊  累计确诊  累计治愈  累计死亡
    }
}
//中国疫情数据树状显示
void Dialog::dataAddTree(QJsonObject province_obj)
{
    QString provinceName = province_obj.value("name").toString();   //"湖北"
    //省份新增
    uint16_t provinceAddConfirm   = province_obj.value("today").toObject().value("confirm").toDouble();
    QJsonObject provinceTotal_obj = province_obj.value("total").toObject();
    //省份累计
    uint16_t provinceTotalConfirm = provinceTotal_obj.value("confirm").toDouble();
    uint16_t provinceTotalHeal    = provinceTotal_obj.value("heal").toDouble();
    uint16_t provinceTotalDead    = provinceTotal_obj.value("dead").toDouble();

//    qDebug() << provinceName << provinceAddConfirm << provinceTotalConfirm << provinceTotalHeal << provinceTotalDead << citySize;       //省份下面多少个市
    // 0       1        2        3       4
    //省市  新增确诊  累计确诊  累计治愈  累计死亡
    QTreeWidgetItem *province = new QTreeWidgetItem(ui->tree);

    province->setData(0, Qt::DisplayRole, provinceName);
    province->setData(1, Qt::DisplayRole, provinceAddConfirm);
    province->setData(2, Qt::DisplayRole, provinceTotalConfirm);
    province->setData(3, Qt::DisplayRole, provinceTotalHeal);
    province->setData(4, Qt::DisplayRole, provinceTotalDead);

    QJsonArray citys_obj = province_obj.value("children").toArray();    //包含当前省的所有市
    uint16_t citySize = citys_obj.size();        //城市的个数

    for(int j = 0; j < citySize; j++)
    {
        QJsonObject city_obj = citys_obj.at(j).toObject();

        QString cityName = city_obj.value("name").toString();
        uint16_t cityAddConfirm   = city_obj.value("today").toObject().value("confirm").toInt();

        QJsonObject cityTotal_obj = city_obj.value("total").toObject();
        uint16_t cityTotalConfirm = cityTotal_obj.value("confirm").toInt();
        uint16_t cityTotalHeal    = cityTotal_obj.value("heal").toInt();
        uint16_t cityTotalDead    = cityTotal_obj.value("dead").toInt();

        QTreeWidgetItem *citys = new QTreeWidgetItem(province);

        citys->setData(0, Qt::DisplayRole, cityName);
        citys->setData(1, Qt::DisplayRole, cityAddConfirm);
        citys->setData(2, Qt::DisplayRole, cityTotalConfirm);
        citys->setData(3, Qt::DisplayRole, cityTotalHeal);
        citys->setData(4, Qt::DisplayRole, cityTotalDead);
    }
}
//海外疫情数据解析并显示
void Dialog::countryTreeParse(QJsonArray areaTree_obj)
{
    ui->tree_2->clear();
    ui->tree_2->sortByColumn(1, Qt::DescendingOrder);      //累计确诊排序
    uint16_t TotalConfirm = 0;
    uint16_t TotalDead = 0;
    for(int i = 1; i < areaTree_obj.size(); i++)
    {
        QJsonObject obj = areaTree_obj.at(i).toObject();
        QString countryName = obj.value("name").toString(); //日本
        QJsonObject countryTotal_obj = obj.value("total").toObject();
        uint16_t countryTotalConfirm = countryTotal_obj.value("confirm").toDouble();
        uint16_t countryTotalHeal    = countryTotal_obj.value("heal").toDouble();
        uint16_t countryTotalDead    = countryTotal_obj.value("dead").toDouble();
        //0      3    2     0
        //国家  确诊  治愈  死亡
        QTreeWidgetItem *country = new QTreeWidgetItem(ui->tree_2);
        country->setData(0, Qt::DisplayRole, countryName);
        country->setData(1, Qt::DisplayRole, countryTotalConfirm);
        country->setData(2, Qt::DisplayRole, countryTotalHeal);
        country->setData(3, Qt::DisplayRole, countryTotalDead);

        TotalConfirm += countryTotalConfirm;
        TotalDead += countryTotalDead;
    //    qDebug() << countryName << countryTotalConfirm << countryTotalHeal <<countryTotalDead << countryTotalSucpect ;
    }
    QString text = "确诊" + QString::number(TotalConfirm) + "例,死亡" + QString::number(TotalDead) + "例";
    ui->lbe_countryTotal->setText(text);
}

int Dialog::getTotalAddData(QJsonObject chinaTotal, QJsonObject chinaAdd)
{
    if(!chinaTotal.isEmpty() && !chinaAdd.isEmpty())
    {
        int chinaTotal_confirm, chinaTotal_suspect, chinaTotal_dead, chinaTotal_heal;
        int chinaAdd_confirm, chinaAdd_suspect, chinaAdd_dead, chinaAdd_heal;

        getNum(chinaAdd, &chinaAdd_confirm, &chinaAdd_suspect, &chinaAdd_dead, &chinaAdd_heal);
        getNum(chinaTotal, &chinaTotal_confirm, &chinaTotal_suspect, &chinaTotal_dead, &chinaTotal_heal);

        ui->lbe_total_confirm->setText(QString::number(chinaTotal_confirm));
        ui->lbe_total_suspect->setText(QString::number(chinaTotal_suspect));
        ui->lbe_total_dead->setText(QString::number(chinaTotal_dead));
        ui->lbe_total_heal->setText(QString::number(chinaTotal_heal));

        ui->lbe_add_confirm->setText("+" + QString::number(chinaAdd_confirm));
//        ui->lbe_add_suspect->setText("+" + QString::number(chinaAdd_suspect));        //取最新值
        ui->lbe_add_dead->setText("+" + QString::number(chinaAdd_dead));
        ui->lbe_add_heal->setText("+" + QString::number(chinaAdd_heal));
        QString tip = "较上日国家卫健委公布的现有疑似病例数" + QString::number(chinaAdd_suspect);

        ui->lbe_suspect->setToolTip(tip);

        return 0;
    }
    else
        return -1;
}

void Dialog::articleParse(QJsonArray arr)
{
    uint16_t arrSize = arr.size();
//    qDebug() << "共 " << arrSize << " 条新闻";

//    qDebug() << QDir::current();
//    qDebug() << QCoreApplication::applicationDirPath();
//    qDebug() << QCoreApplication::applicationFilePath();
//    qDebug() << QCoreApplication::applicationName();
    QString tmp = QCoreApplication::applicationDirPath() + "/" + newsHtmlFileName;
    QFile file(tmp);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "文件打开失败";
    }
//    qDebug() << "file open ok";
    QByteArray allData = file.readAll();
    file.close();
    QList<QByteArray> ba;

//    ba = allData.split("");
    ba = allData.split('*');
//    qDebug() << ba.size();
    QString html;
    for(int i = 0; i < arrSize; i++)
    {
        QJsonObject article_obj = arr.at(i).toObject();//每一篇文件信息
//        QString cmsId = article_obj.value("cmsId").toString();
        QString media = article_obj.value("media").toString();
        QString publish_time = article_obj.value("publish_time").toString();
        QString desc = article_obj.value("desc").toString();
        QString url = article_obj.value("url").toString();
        QString title = article_obj.value("title").toString();
        QString str = ba[0] + title + ba[1] + desc + ba[2] + url + ba[3] + media + ba[4] + publish_time + ba[5];
        html.append(str);
//        if(i == 0)
//        qDebug() << html;

//        qDebug() << publish_time << media << title << url;
    }
    html.append(ba[6]);
//    qDebug() << html;
    ui->tb_news->clear();
    ui->tb_news->setHtml(html);
//    qDebug() << "set Html ok";
}
//获取人数
int Dialog::getNum(QJsonObject obj, int *num_confirm, int *num_suspect, int *num_dead, int *num_heal)
{
    if(!obj.isEmpty())
    {
        *num_confirm = obj.value("confirm").toDouble();
        *num_suspect = obj.value("suspect").toDouble();
        *num_dead = obj.value("dead").toDouble();
        *num_heal = obj.value("heal").toDouble();

        return 0;
    }
    else
        return -1;
}
//容器类转换:QString转换为double
QVector<double> Dialog::QStringToDouble(QVector<QString> str, uint16_t len)
{
    QVector<double> dub(len);

    for(int i = 0; i < str.size(); i++)
    {
        dub[i] = str[i].toDouble();
    }
    return dub;
}
