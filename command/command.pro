#-------------------------------------------------
#
# Project created by QtCreator 2016-01-19T09:15:12
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = command
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    command.cpp \
    lightoncommand.cpp \
    lightoffcommand.cpp \
    light.cpp \
    remotecontrol.cpp \
    guagedoor.cpp \
    remotecontroltest.cpp

HEADERS += \
    command.h \
    lightoncommand.h \
    lightoffcommand.h \
    light.h \
    remotecontrol.h \
    guagedoor.h \
    remotecontroltest.h
