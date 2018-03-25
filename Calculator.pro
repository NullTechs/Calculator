#---------------------------------------------------------------------------------------------------------
#Developed by Mo Chabuk "Null"                                                                                 -
#This code is not final and was created in a short period of time. still needs more optimization and work-
#For any suggestions please don't hesitate to contact me dev@nulltechs.com                               -
#---------------------------------------------------------------------------------------------------------


#-------------------------------------------------
#
# Project created by QtCreator 2017-09-17T15:14:23
#
#-------------------------------------------------







QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dialog.cpp

HEADERS += \
        mainwindow.h \
    dialog.h

FORMS += \
        mainwindow.ui \
    dialog.ui

DISTFILES += \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat \
    android/AndroidManifest.xml \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradlew \
    android/res/values/libs.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew.bat

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
