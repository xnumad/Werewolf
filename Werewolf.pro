#-------------------------------------------------
#
# Project created by QtCreator 2018-12-06T12:07:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Werewolf
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gunner.cpp \
    witch.cpp \
    seer.cpp \
    serialkiller.cpp \
    sectleader.cpp \
    jailer.cpp \
    priest.cpp \
    bodyguard.cpp \
    player.cpp \
    game.cpp \
    shaman.cpp

HEADERS  += mainwindow.h \
    gunner.h \
    witch.h \
    seer.h \
    serialkiller.h \
    sectleader.h \
    jailer.h \
    priest.h \
    bodyguard.h \
    player.h \
    game.h \
    shaman.h

FORMS    += mainwindow.ui
