#-------------------------------------------------
#
# Project created by QtCreator 2017-05-29T12:49:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FeedReaderApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    rsstreewidget.cpp

HEADERS  += mainwindow.h \
    rsstreewidget.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++14
