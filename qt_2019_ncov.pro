#-------------------------------------------------
#
# Project created by QtCreator 2020-02-05T11:16:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_2019_ncov
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        dialog.cpp \
    qcustomplot.cpp \
    parse.cpp \
    network.cpp \
    plot.cpp \
    slots.cpp \
    about.cpp \
    rumor.cpp \
    rumor_info.cpp

HEADERS  += dialog.h \
    qcustomplot.h \
    about.h \
    rumor.h \
    rumor_info.h

FORMS    += dialog.ui \
    about.ui \
    rumor.ui \
    rumor_info.ui


QT += network
QT += printsupport

RESOURCES += \
    img.qrc

# 添加图标
RC_ICONS = bitbug_favicon.ico

#CONFIG -= debug_and_release
