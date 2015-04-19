#-------------------------------------------------
#
# Project created by QtCreator 2015-04-19T12:45:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TaskManager
TEMPLATE = app


SOURCES += main.cpp\
        taskmanager.cpp \
    authentication.cpp \
    customersearch.cpp

HEADERS  += taskmanager.h \
    authentication.h \
    customersearch.h

FORMS    += taskmanager.ui \
    authentication.ui \
    customersearch.ui
