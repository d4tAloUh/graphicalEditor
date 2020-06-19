#include "pippete.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>

Pippete::Pippete(MainWindow* root):root(root)
{

}


void Pippete::start( QImage* img, double x, double y){
    QPixmap pixmap(root->ui->graphicsView->width(),root->ui->graphicsView->height());
    QPainter painter(&pixmap);
    root->ui->graphicsView->render(&painter);
    draw = new QImage(pixmap.toImage());
    action(x,y);

};
void Pippete::end(double x , double y ){
    action(x,y);
};
void Pippete::proceedMove(double x , double y ){
    action(x,y);
};

void Pippete::action(double x , double y ){
    if (x < 0 || y < 0){
        return;
    }
    if (x > root->ui->graphicsView->width() || y > root->ui->graphicsView->height()){
        return;
    }
    QColor color(draw->pixelColor(x,y));
    root->setColor(color);

    QString selected_color_str = "background-color: " + color.name();
    root->ui->selectColor->setStyleSheet(selected_color_str);

};
