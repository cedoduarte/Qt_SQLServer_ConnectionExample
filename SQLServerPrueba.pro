#-------------------------------------------------
#
# Project created by QtCreator 2016-09-05T17:29:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SQLServerPrueba
TEMPLATE = app

SOURCES += main.cpp\
        MainWindow.cpp \
    DatabaseConnection.cpp

HEADERS  += MainWindow.h \
    DatabaseConnection.h

FORMS    += MainWindow.ui

QMAKE_CXXFLAGS += -std=gnu++14
