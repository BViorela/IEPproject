QT += core
QT -= gui

CONFIG += c++11

TARGET = QtProjServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \ #main.cpp \
    bcm2835_stub.cpp \
    #pwm.c \
   # pwmm.cpp \
    spi.c \
    serial.cpp \
    spi.cpp
   # pin.cpp \

HEADERS += \
    bcm2835.h \
    pwmm.h \
    serial.h \
    spi.h
   # pin.h \
