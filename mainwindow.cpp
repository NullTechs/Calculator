//---------------------------------------------------------------------------------------------------------
//Developed by Mo Chabuk                                                                                  -
//This code is not final and was created in a short period of time. still needs more optimization and work-
//For any suggestions please don't hesitate to contact me dev@nulltechs.com                               -
//---------------------------------------------------------------------------------------------------------
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::MainWindow)

  {
    ui->setupUi(this);
    this->setWindowTitle("NullTechs");

    //Buttons
    connect(ui->ZeroButton,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->DzeroButton,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No1,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No2,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No3,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No4,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No5,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No6,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No7,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No8,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->No9,SIGNAL(released()),this,SLOT(GetDigits()));
    connect(ui->AddButton,SIGNAL(released()),this, SLOT(Addition()));
    connect(ui->SubButton,SIGNAL(released()),this, SLOT(Substr()));
    connect(ui->EqualButton,SIGNAL(released()),this, SLOT(equalOperator()));
    connect(ui->DivButton,SIGNAL(released()),this, SLOT(Division()));
    connect(ui->MultipButton,SIGNAL(released()),this,SLOT(Multiplication()));
    connect(ui->SqRtButton,SIGNAL(released()),this,SLOT(Sqrt()));
    connect(ui->SquaredButton,SIGNAL(released()),this,SLOT(Squared()));
    connect(ui->CbRtButton,SIGNAL(released()),this,SLOT(CuRt()));
    connect(ui->ExpButton,SIGNAL(released()),this,SLOT(Exp()));
    connect(ui->LogButton,SIGNAL(released()),this,SLOT(Log()));
    connect(ui->LognButton,SIGNAL(released()),this,SLOT(LogN()));
    connect(ui->SinButton,SIGNAL(released()),this,SLOT(Sin()));
    connect(ui->AsinButton,SIGNAL(released()),this,SLOT(Asin()));
    connect(ui->CosButton,SIGNAL(released()),this,SLOT(Cos()));
    connect(ui->AcosButton,SIGNAL(released()),this,SLOT(Acos()));
    connect(ui->TanButton,SIGNAL(released()),this,SLOT(Tan()));
    connect(ui->AtanButton,SIGNAL(released()),this,SLOT(Atan()));
    connect(ui->ClearButton,SIGNAL(released()),this,SLOT(Reset()));




    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());



}

MainWindow::~MainWindow()
    {
        delete ui;
    }



//**************************************************
void MainWindow::SetFlag(int flag){
    FLAG=flag;
}

void MainWindow::SetFirstVal(double FirstVal){
    _FirstValue=FirstVal;

}

void MainWindow::SetSecVal(double SecVal){
    _SecValue=SecVal;

}


int MainWindow::GetFlag(){
    return FLAG;
}


double MainWindow::GetFirstVal(){
    return _FirstValue;
}

double MainWindow::GetSecVal(){
    return _SecValue;
}


//******************************************************************************************

//Any mathmatical operations involves two values

//For the sake of simplicity and optimization switch is used instead of IF-ELSE statements.
void MainWindow::MainOperator(int operation){


    switch (operation){
        case 1:

        SetFirstVal(GetFirstVal()+GetSecVal());
        outPut();
        break;

    case 2:
        SetSecVal(GetSecVal()-GetFirstVal());
        SetFirstVal(GetSecVal());

        outPut();
        break;

    case 3:

        SetSecVal(GetSecVal()/GetFirstVal());
        SetFirstVal(GetSecVal());
        outPut();
        break;

    case 4:

        SetFirstVal(GetSecVal()*GetFirstVal());
        outPut();
        break;
    case 5:
        SetFirstVal(pow(GetSecVal(),GetFirstVal()));
        outPut();
        break;
    case 6:
        SetFirstVal(log10(GetFirstVal())/log10(GetSecVal()));
        outPut();
    default:
    break;
    }
    }



void MainWindow::equalOperator(){
    ClearScreen();
    MainOperator(GetFlag());
    }


void MainWindow::Addition(){
    SetSecVal(GetFirstVal());
    ClearScreen();
    SetFlag(1);
    }


void MainWindow::Substr(){
        SetSecVal(GetFirstVal());
        ClearScreen();
        SetFlag(2);
    }



void MainWindow::Division(){
    SetSecVal(GetFirstVal());
    ClearScreen();
    SetFlag(3);
    }



void MainWindow::Multiplication(){
    SetSecVal(GetFirstVal());
    ClearScreen();
    SetFlag(4);
    }


void MainWindow::Sqrt(){

    SetFirstVal(sqrt(GetFirstVal()));
    outPut();
}




void MainWindow::CuRt(){

    SetFirstVal(cbrt(GetFirstVal()));
    outPut();
}

void MainWindow::Exp(){
    SetSecVal(GetFirstVal());
    ClearScreen();
    SetFlag(5);

}

void MainWindow::Squared(){

    SetFirstVal(GetFirstVal()*GetFirstVal());
    outPut();

}


void MainWindow::Log(){

    SetFirstVal(log10(GetFirstVal()));
    outPut();
}


void MainWindow::LogN(){
    SetSecVal(GetFirstVal());
    ClearScreen();
    SetFlag(6);
}


//----------------------------**-Trig Function-**----------------------------------------------

void MainWindow::Sin(){

   SetFirstVal(sin((GetFirstVal()*Pi)/180));
   outPut();
}

void MainWindow::Asin(){

   SetFirstVal((asin(GetFirstVal()))*180/Pi);
   outPut();

}


void MainWindow::Cos(){

   SetFirstVal(cos((GetFirstVal()*Pi)/180));
   outPut();

}

void MainWindow::Acos(){
   SetFirstVal((acos(GetFirstVal()))*180/Pi);
   outPut();

}

void MainWindow::Tan(){
  SetFirstVal(tan((GetFirstVal()*Pi)/180));
  outPut();

}

void MainWindow::Atan(){

    SetFirstVal((atan(GetFirstVal()))*180/Pi);
    outPut();

}
//----------------------------**-End of Tring-**----------------------------------------



//---------------------------**Misc Functions**-----------------------------------------

void MainWindow::outPut(){
    static QString OnScreenAddedtoButtonValue;
    OnScreenAddedtoButtonValue=QString::number(GetFirstVal(),'g',12);         //The Value was converted to a string to be displaced inside the text field.
    ui->MainScreen->setText(OnScreenAddedtoButtonValue);

    }



void MainWindow::Reset(){

    SetFlag(0);
    SetFirstVal(0);                                                         //Resets everything to zero
    SetSecVal(0);
    ClearScreen();
    }




void MainWindow::ClearScreen(){
    ui->MainScreen->setText("0");   //Only set the screen value to 0 "Doesn't affect any other variables".

    }


void MainWindow::GetDigits(){
    QPushButton* TempPressed=(QPushButton*)sender();                            //Get the Name of the pressed button
    SetFirstVal((ui->MainScreen->text()+TempPressed->text()).toDouble());       //Get the value on screen add the new value to it, convert both to a double
    outPut();                                                                   //then store it in the ValueContainer.
    }



void MainWindow::on_DecButton_released(){
    ui->MainScreen->setText(ui->MainScreen->text()+'.');
}



void MainWindow::on_ToNegButton_released(){                                   //Changing the current value to a negative value
    SetFirstVal((GetFirstVal()*-1));
    outPut();
}



void MainWindow::on_RoundButton_clicked()
{
  Dialog Helpwindow;                                    //opens a new Window"help and more"

    Helpwindow.setModal(true);
    Helpwindow.exec();
}

//---------------------------**End of Misc Functions**-----------------------------------------








