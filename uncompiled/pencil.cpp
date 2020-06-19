#include "pencil.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>

Pencil::Pencil(MainWindow* root):root(root)
{

}


void Pencil::start( QImage* img, double x, double y){
    last_x = x;
    last_y = y;
    draw = img;
    action(x,y);

};
void Pencil::end(double x , double y ){
    action(x,y);
};
void Pencil::proceedMove(double x , double y ){
    action(x,y);
};

void Pencil::action(double x , double y ){
    QPainter painter(draw);
    QLine line(x,y,last_x,last_y);
    QPen pen;
    pen.setWidth(root->getWidth());
    pen.setColor(root->getColor());
    painter.setPen(pen);
//    painter.drawEllipse(x-root->getWidth()/2,y - root->getWidth()/2,root->getWidth(),root->getWidth());
    painter.drawLine(line);
    last_y = y;
    last_x = x;

};
