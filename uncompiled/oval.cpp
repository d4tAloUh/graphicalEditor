#include "oval.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>
Oval::Oval(MainWindow* root):root(root)
{

}


void Oval::start( QImage* img, double x, double y){
    first_x = x;
    first_y = y;
    draw = img;
    action(x,y);

};
void Oval::end(double x , double y ){
    action(x,y);
};
void Oval::proceedMove(double x , double y ){
    action(x,y);
};

void Oval::action(double x , double y ){
    draw->fill(qRgba(255,255,255,0));
    QPainter painter(draw);
    QRect rect(QPoint(first_x,first_y),QPoint(x,y));
    QPen pen;
    pen.setWidth(root->getWidth());
    pen.setColor(root->getColor());
    painter.setPen(pen);
    QBrush brush;
    if (root->getFilled()){
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(root->getColor());
    }
    else{
        brush.setStyle(Qt::NoBrush);
    }
    painter.setBrush(brush);
    painter.drawEllipse(rect);

};
