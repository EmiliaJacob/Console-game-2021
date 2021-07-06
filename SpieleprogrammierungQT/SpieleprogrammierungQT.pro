QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    field.cpp \
    game.cpp \
    gameboard.cpp \
    inputparser.cpp \
    inventory.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    testhelper.cpp

HEADERS += \
    field.h \
    game.h \
    gameboard.h \
    inputparser.h \
    inventory.h \
    item.h \
    mainwindow.h \
    player.h \
    testhelper.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
