/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *No2;
    QPushButton *DecButton;
    QPushButton *CosButton;
    QPushButton *No5;
    QPushButton *No8;
    QPushButton *No7;
    QPushButton *TanButton;
    QPushButton *AcosButton;
    QPushButton *No4;
    QPushButton *ZeroButton;
    QPushButton *MultipButton;
    QLabel *MainScreen;
    QPushButton *DivButton;
    QPushButton *AsinButton;
    QPushButton *ClearButton;
    QPushButton *SubButton;
    QPushButton *SinButton;
    QPushButton *AtanButton;
    QPushButton *No1;
    QPushButton *AddButton;
    QPushButton *DzeroButton;
    QPushButton *No6;
    QPushButton *EqualButton;
    QPushButton *No3;
    QPushButton *No9;
    QPushButton *ExpButton;
    QPushButton *ToNegButton;
    QPushButton *RoundButton;
    QPushButton *SquaredButton;
    QPushButton *SqRtButton;
    QFrame *line;
    QFrame *line_3;
    QPushButton *LogButton;
    QPushButton *LognButton;
    QPushButton *CbRtButton;
    QFrame *line_4;
    QFrame *line_5;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 500);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(600, 800));
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 0, 331, 401));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QLatin1String("border-style: solid;\n"
"border: 2px solid grey;\n"
"border-radius: 8px;\n"
"background-color: rgb(57, 0, 0);"));
        No2 = new QPushButton(groupBox);
        No2->setObjectName(QStringLiteral("No2"));
        No2->setGeometry(QRect(90, 125, 51, 31));
        QFont font;
        font.setPointSize(14);
        No2->setFont(font);
        No2->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        DecButton = new QPushButton(groupBox);
        DecButton->setObjectName(QStringLiteral("DecButton"));
        DecButton->setGeometry(QRect(150, 160, 51, 31));
        DecButton->setFont(font);
        DecButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        CosButton = new QPushButton(groupBox);
        CosButton->setObjectName(QStringLiteral("CosButton"));
        CosButton->setGeometry(QRect(125, 210, 80, 35));
        CosButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        No5 = new QPushButton(groupBox);
        No5->setObjectName(QStringLiteral("No5"));
        No5->setGeometry(QRect(90, 90, 51, 31));
        No5->setFont(font);
        No5->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        No8 = new QPushButton(groupBox);
        No8->setObjectName(QStringLiteral("No8"));
        No8->setGeometry(QRect(90, 55, 51, 31));
        No8->setFont(font);
        No8->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        No7 = new QPushButton(groupBox);
        No7->setObjectName(QStringLiteral("No7"));
        No7->setGeometry(QRect(30, 55, 51, 31));
        No7->setFont(font);
        No7->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        TanButton = new QPushButton(groupBox);
        TanButton->setObjectName(QStringLiteral("TanButton"));
        TanButton->setGeometry(QRect(220, 210, 80, 35));
        TanButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        AcosButton = new QPushButton(groupBox);
        AcosButton->setObjectName(QStringLiteral("AcosButton"));
        AcosButton->setGeometry(QRect(125, 250, 80, 35));
        AcosButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        No4 = new QPushButton(groupBox);
        No4->setObjectName(QStringLiteral("No4"));
        No4->setGeometry(QRect(30, 90, 51, 31));
        No4->setFont(font);
        No4->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        ZeroButton = new QPushButton(groupBox);
        ZeroButton->setObjectName(QStringLiteral("ZeroButton"));
        ZeroButton->setGeometry(QRect(90, 160, 51, 31));
        ZeroButton->setFont(font);
        ZeroButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        MultipButton = new QPushButton(groupBox);
        MultipButton->setObjectName(QStringLiteral("MultipButton"));
        MultipButton->setGeometry(QRect(210, 160, 41, 31));
        MultipButton->setFont(font);
        MultipButton->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));
        MainScreen = new QLabel(groupBox);
        MainScreen->setObjectName(QStringLiteral("MainScreen"));
        MainScreen->setGeometry(QRect(30, 10, 271, 41));
        MainScreen->setStyleSheet(QLatin1String("background-color: rgb(206, 225, 211);\n"
"font: 75 14pt \"Times New Roman\";\n"
""));
        MainScreen->setText(QStringLiteral("0"));
        MainScreen->setTextFormat(Qt::PlainText);
        DivButton = new QPushButton(groupBox);
        DivButton->setObjectName(QStringLiteral("DivButton"));
        DivButton->setGeometry(QRect(210, 125, 41, 31));
        DivButton->setFont(font);
        DivButton->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));
        AsinButton = new QPushButton(groupBox);
        AsinButton->setObjectName(QStringLiteral("AsinButton"));
        AsinButton->setGeometry(QRect(30, 250, 80, 35));
        AsinButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        ClearButton = new QPushButton(groupBox);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setGeometry(QRect(260, 55, 41, 31));
        ClearButton->setFont(font);
        ClearButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        SubButton = new QPushButton(groupBox);
        SubButton->setObjectName(QStringLiteral("SubButton"));
        SubButton->setGeometry(QRect(210, 90, 41, 31));
        SubButton->setFont(font);
        SubButton->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));
        SinButton = new QPushButton(groupBox);
        SinButton->setObjectName(QStringLiteral("SinButton"));
        SinButton->setGeometry(QRect(30, 210, 80, 35));
        SinButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        AtanButton = new QPushButton(groupBox);
        AtanButton->setObjectName(QStringLiteral("AtanButton"));
        AtanButton->setGeometry(QRect(220, 250, 80, 35));
        AtanButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        No1 = new QPushButton(groupBox);
        No1->setObjectName(QStringLiteral("No1"));
        No1->setGeometry(QRect(30, 125, 51, 31));
        No1->setFont(font);
        No1->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        AddButton = new QPushButton(groupBox);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(210, 55, 41, 31));
        AddButton->setFont(font);
        AddButton->setStyleSheet(QStringLiteral("background-color: rgb(170, 85, 0);"));
        DzeroButton = new QPushButton(groupBox);
        DzeroButton->setObjectName(QStringLiteral("DzeroButton"));
        DzeroButton->setGeometry(QRect(30, 160, 51, 31));
        DzeroButton->setFont(font);
        DzeroButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        No6 = new QPushButton(groupBox);
        No6->setObjectName(QStringLiteral("No6"));
        No6->setGeometry(QRect(150, 90, 51, 31));
        No6->setFont(font);
        No6->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        EqualButton = new QPushButton(groupBox);
        EqualButton->setObjectName(QStringLiteral("EqualButton"));
        EqualButton->setGeometry(QRect(260, 125, 41, 65));
        EqualButton->setFont(font);
        EqualButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        No3 = new QPushButton(groupBox);
        No3->setObjectName(QStringLiteral("No3"));
        No3->setGeometry(QRect(150, 125, 51, 31));
        No3->setFont(font);
        No3->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        No9 = new QPushButton(groupBox);
        No9->setObjectName(QStringLiteral("No9"));
        No9->setGeometry(QRect(150, 55, 51, 31));
        No9->setFont(font);
        No9->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        ExpButton = new QPushButton(groupBox);
        ExpButton->setObjectName(QStringLiteral("ExpButton"));
        ExpButton->setGeometry(QRect(220, 290, 80, 35));
        ExpButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        ToNegButton = new QPushButton(groupBox);
        ToNegButton->setObjectName(QStringLiteral("ToNegButton"));
        ToNegButton->setGeometry(QRect(260, 90, 41, 31));
        ToNegButton->setFont(font);
        ToNegButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        RoundButton = new QPushButton(groupBox);
        RoundButton->setObjectName(QStringLiteral("RoundButton"));
        RoundButton->setGeometry(QRect(29, 370, 271, 23));
        RoundButton->setStyleSheet(QLatin1String("   background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
""));
        SquaredButton = new QPushButton(groupBox);
        SquaredButton->setObjectName(QStringLiteral("SquaredButton"));
        SquaredButton->setGeometry(QRect(30, 290, 80, 35));
        SquaredButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        SqRtButton = new QPushButton(groupBox);
        SqRtButton->setObjectName(QStringLiteral("SqRtButton"));
        SqRtButton->setGeometry(QRect(125, 290, 80, 35));
        SqRtButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 200, 291, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(310, 2, 5, 401));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        LogButton = new QPushButton(groupBox);
        LogButton->setObjectName(QStringLiteral("LogButton"));
        LogButton->setGeometry(QRect(125, 330, 80, 35));
        LogButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        LognButton = new QPushButton(groupBox);
        LognButton->setObjectName(QStringLiteral("LognButton"));
        LognButton->setGeometry(QRect(220, 330, 80, 35));
        LognButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        CbRtButton = new QPushButton(groupBox);
        CbRtButton->setObjectName(QStringLiteral("CbRtButton"));
        CbRtButton->setGeometry(QRect(30, 330, 80, 35));
        CbRtButton->setStyleSheet(QLatin1String("background-color: rgb(181, 175, 137);\n"
""));
        line_4 = new QFrame(groupBox);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(20, 200, 5, 401));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(20, 0, 5, 401));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        No2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        DecButton->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        CosButton->setText(QApplication::translate("MainWindow", "Cos", Q_NULLPTR));
        No5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        No8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        No7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        TanButton->setText(QApplication::translate("MainWindow", "Tan", Q_NULLPTR));
        AcosButton->setText(QApplication::translate("MainWindow", "ACos", Q_NULLPTR));
        No4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        ZeroButton->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        MultipButton->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        DivButton->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        AsinButton->setText(QApplication::translate("MainWindow", "ASin", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        SubButton->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        SinButton->setText(QApplication::translate("MainWindow", "Sin", Q_NULLPTR));
        AtanButton->setText(QApplication::translate("MainWindow", "ATan", Q_NULLPTR));
        No1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        AddButton->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        DzeroButton->setText(QApplication::translate("MainWindow", "00", Q_NULLPTR));
        No6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        EqualButton->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        No3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        No9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        ExpButton->setText(QApplication::translate("MainWindow", "Exp", Q_NULLPTR));
        ToNegButton->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        RoundButton->setText(QApplication::translate("MainWindow", "Help and more !", Q_NULLPTR));
        SquaredButton->setText(QApplication::translate("MainWindow", "Sq", Q_NULLPTR));
        SqRtButton->setText(QApplication::translate("MainWindow", "\342\210\232", Q_NULLPTR));
        LogButton->setText(QApplication::translate("MainWindow", "Log", Q_NULLPTR));
        LognButton->setText(QApplication::translate("MainWindow", "Log n", Q_NULLPTR));
        CbRtButton->setText(QApplication::translate("MainWindow", "\302\263\342\210\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
