
Qt 应用程序中如果使用了https网络访问，使用windeployqt打包工具是不会添加网络支持相关的库，则需要手动添加两个库文件。

1.使用Qt 5.12.4之前的版本开发的网络应用，需要添加以下两个文件：

libeay32.dll
ssleay32.dll

2.使用Qt 5.12.4及之后的版本开发的网络应用，需要添加以下两个文件：

libssl-1_1-x64.dll
libcrypto-1_1-x64.dll

查看当前openSSL版本：

 qDebug()<<QSslSocket::sslLibraryBuildVersionString();


