#-------------------------------------------------
#
# Project created by QtCreator 2012-01-13T15:18:06
#
#-------------------------------------------------

QT       += core gui

TARGET = BlastOff
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    src/pref.cpp \
    src/prefview.cpp \
    src/controller.cpp

HEADERS  += mainwindow.h \
    inc/pref.h \
    inc/prefview.h \
    inc/controller.h

FORMS    += mainwindow.ui \
    forms/prefview.ui

RESOURCES += \
    resources.qrc

# Boost library location on Andy's machine
INCLUDEPATH += "e:\\programming\\lib\\boost_1_47_0"
