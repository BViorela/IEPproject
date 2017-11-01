QT += core
QT -= gui

CONFIG += c++11

TARGET = QtProjServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \ #main.cpp \
    bcm2835_stub.cpp \
    pwm.c \
    pwmm.cpp
   # pin.cpp \

HEADERS += \
    bcm2835.h \
    pwmm.h
   # pin.h \
