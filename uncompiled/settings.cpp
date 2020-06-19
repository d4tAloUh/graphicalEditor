#include "settings.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
#include <QtDebug>

Settings::Settings(MainWindow* Root, QObject* parent):QObject(parent),root(Root)
{
   connect(root->ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(slider_changed()));
   connect(root->ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(spin_changed()));
   connect(root->ui->checkBox, SIGNAL(stateChanged(int)), this, SLOT(filled_changed()));
   connect(root->ui->selectColor,  SIGNAL(clicked()), this ,SLOT(chooseColor()));
   root->ui->checkBox->setCheckState(Qt::Checked);

}

void Settings::spin_changed(){
    int value = root->ui->spinBox->value();
    root->setWidth(value);
    root->ui->horizontalSlider->setValue(value);
};
void Settings::slider_changed(){
    int value = root->ui->horizontalSlider->value();
    root->setWidth(value);
    root->ui->spinBox->setValue(value);
};
void Settings::filled_changed(){
    int value = root->ui->checkBox->checkState();
    if (value == 0)
        root->setFilled(false);
    else root->setFilled(true);
};

void Settings::chooseColor(){
    QColor color = QColorDialog::getColor();
    root->setColor(color);
    QString str = "background-color: " + color.name();
    root->ui->selectColor->setStyleSheet(str);
};
