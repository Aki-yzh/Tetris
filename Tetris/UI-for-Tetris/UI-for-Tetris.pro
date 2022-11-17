QT       += core gui
QT       += core gui widgets
QT   += core gui widgets
QT  +=   multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    tetrixboard.cpp \
    tetrixpiece.cpp \
    tetrixwindow.cpp

HEADERS += \
    tetrixboard.h \
    tetrixpiece.h \
    tetrixwindow.h

FORMS += \
    tetrixwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc




