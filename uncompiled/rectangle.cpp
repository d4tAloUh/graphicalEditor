#include "rectangle.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>
Rectangle::Rectangle(MainWindow* root):root(root)
{

}

void Rectangle::start( QImage* img, double x, double y){
    first_x = x;
    first_y = y;
    draw = img;

};
void Rectangle::end(double x , double y ){
    action(x,y);
};
void Rectangle::proceedMove(double x , double y ){
    action(x,y);
};

void Rectangle::action(double x , double y ){
    draw->fill(qRgba(255,255,255,0));
    QRect rect(QPoint(x,y),QPoint(first_x,first_y));
    QPainter painter(draw);

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
    painter.drawRect(rect);

};
