//---------------------------------------------------------------------------------------------------------
//Developed by Mo Chabuk                                                                                  -
//This code is not final and was created in a short period of time. still needs more optimization and work-
//For any suggestions please don't hesitate to contact me dev@nulltechs.com                               -
//---------------------------------------------------------------------------------------------------------

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
