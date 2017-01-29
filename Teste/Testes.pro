#-------------------------------------------------
#
# Project created by QtCreator 2017-01-28T22:39:30
#
#-------------------------------------------------

QT       += network testlib

QT       -= gui

TARGET = Testes
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app
CONFIG  += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    classes/hello.cpp \
    tests/tst_hello.cpp \
    main.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    classes/hello.h \
    tests/tst_hello.h

INCLUDEPATH += "/home/herik/Testes"

QMAKE_CXXFLAGS += -g -Wall -fprofile-arcs -ftest-coverage -O0
QMAKE_LFLAGS   += -g -Wall -fprofile-arcs -ftest-coverage -O0
LIBS           += -lgcov
