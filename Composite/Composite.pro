#-------------------------------------------------
#
# Project created by QtCreator 2016-01-28T09:15:28
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Composite
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    component.cpp \
    leaf.cpp \
    basecomponent.cpp \
    compositeiterator.cpp \
    compositetest.cpp

HEADERS += \
    component.h \
    leaf.h \
    basecomponent.h \
    compositeiterator.h \
    compositetest.h
