QT       += core gui widgets

TARGET = qgol
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewidget.cpp \
    matrix.cpp

HEADERS  += mainwindow.h \
    gamewidget.h \
    matrix.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    README.md
