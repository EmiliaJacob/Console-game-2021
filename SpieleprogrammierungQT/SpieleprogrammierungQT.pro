QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    combineitemsstate.cpp \
    dropstate.cpp \
    fasttravelstate.cpp \
    field.cpp \
    game.cpp \
    idlestate.cpp \
    inputparser.cpp \
    inventory.cpp \
    item.cpp \
    level.cpp \
    main.cpp \
    mainwindow.cpp \
    pickupstate.cpp \
    player.cpp \
    savepoint.cpp \
    states.cpp \
    testhelper.cpp \
    useitemstate.cpp

HEADERS += \
    combineitemsstate.h \
    dropstate.h \
    fasttravelstate.h \
    field.h \
    game.h \
    idlestate.h \
    inputparser.h \
    inventory.h \
    istates.h \
    item.h \
    level.h \
    mainwindow.h \
    pickupstate.h \
    player.h \
    savepoint.h \
    states.h \
    testhelper.h \
    useitemstate.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
