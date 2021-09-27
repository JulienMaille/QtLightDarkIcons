QT += core gui widgets

TARGET = LightDarkIcons
CONFIG += c++11
TEMPLATE = app

HEADERS += demo.h
SOURCES += main.cpp demo.cpp
FORMS += demo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += library-files

RESOURCES += icons.qrc