//----------------------------------------------------------------------------------------------------------
//Developed by Mo Chabuk                                                                                   -
//This code is not final and was created in a short period of time. still needs more optimization and work -
//For any suggestions please don't hesitate to contact me dev@nulltechs.com                                -
//----------------------------------------------------------------------------------------------------------

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<cmath>
#include"dialog.h"
#define Pi 3.14
#include "QRect"
#include "QDesktopWidget"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void SetFlag(int flag);
    void SetSecVal(double SecVal);
    void SetFirstVal(double FirstVal);
    int GetFlag();
    double GetSecVal();
    double GetFirstVal();



    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int FLAG;
    double _FirstValue;
    double _SecValue;
private slots:
    void MainOperator(int);
    void ClearScreen();
    void equalOperator();
    void outPut();
    void GetDigits();
    void Addition();
    void Substr();
    void Division();
    void Multiplication();
    void Reset();
    void Sin();
    void Cos();
    void Tan();
    void Asin();
    void Acos();
    void Atan();
    void Sqrt();
    void Squared();
    void Log();
    void LogN();
    void CuRt();
    void Exp();
    void on_DecButton_released();
    void on_ToNegButton_released();
    void on_RoundButton_clicked();
};

#endif // MAINWINDOW_H
