#include "newfiledialog.h"
#include "ui_newfiledialog.h"

newFileDialog::newFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newFileDialog)
{
    ui->setupUi(this);
    connect(ui->cancelButton, SIGNAL(clicked()),this,SLOT(closed()));
    connect(ui->okButton, SIGNAL(clicked()),this,SLOT(proceed()));
};

void newFileDialog::closed(){
   this->reject();
}

void newFileDialog::proceed(){
   this->accept();
}

newFileDialog::~newFileDialog()
{
    delete ui;
}
