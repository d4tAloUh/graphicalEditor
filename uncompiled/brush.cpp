#include "brush.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>

Brush::Brush(MainWindow* root):root(root)
{

}


void Brush::start( QImage* img, double x, double y){
    last_x = x;
    last_y = y;
    draw = img;
    action(x,y);

};
void Brush::end(double x , double y ){
    action(x,y);
};
void Brush::proceedMove(double x , double y ){
    action(x,y);
};

void Brush::action(double x , double y ){
    QPainter painter(draw);
    QLine line(x,y,last_x,last_y);
    QPen pen;
    pen.setWidth(root->getWidth());
    pen.setColor(root->getColor());
    painter.setPen(pen);
    QBrush brush;
    if (root->getFilled()){
        brush.setStyle(Qt::SolidPattern);
    }
    else{
        brush.setStyle(Qt::NoBrush);
    }
    painter.setBrush(brush);
    painter.drawLine(line);
    painter.drawEllipse(x-root->getWidth()/2,y - root->getWidth()/2,root->getWidth(),root->getWidth());
    last_y = y;
    last_x = x;

};
