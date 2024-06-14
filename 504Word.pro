QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fifth.cpp \
    fourth.cpp \
    main.cpp \
    main504.cpp \
    maindatabase.cpp \
    second.cpp \
    third.cpp

HEADERS += \
    fifth.h \
    fourth.h \
    main504.h \
    maindatabase.h \
    second.h \
    third.h

FORMS += \
    fifth.ui \
    fourth.ui \
    main504.ui \
    second.ui \
    third.ui

TRANSLATIONS += \
    504Word_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
