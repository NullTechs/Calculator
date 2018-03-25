//---------------------------------------------------------------------------------------------------------
//Developed by Mo Chabuk                                                                                  -
//This code is not final and was created in a short period of time. still needs more optimization and work-
//For any suggestions please don't hesitate to contact me dev@nulltechs.com                               -
//---------------------------------------------------------------------------------------------------------

#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Help");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    Dialog::destroy();
}
