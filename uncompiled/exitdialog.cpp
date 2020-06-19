#include "exitdialog.h"
#include "ui_exitDialog.h"

exitDialog::exitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exitDialog)
{
    ui->setupUi(this);
    connect(ui->cancelButton, SIGNAL(clicked()),this,SLOT(closed()));
    connect(ui->yesButton, SIGNAL(clicked()),this,SLOT(proceed()));
};

void exitDialog::closed(){
   this->reject();
}

void exitDialog::proceed(){
   this->accept();
}


exitDialog::~exitDialog()
{
    delete ui;
}
