#include "triangle.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>

Triangle::Triangle(MainWindow* root):root(root)
{

}
void Triangle::start( QImage* img, double x, double y){
    first_x = x;
    first_y = y;
    draw = img;
//    action(x,y);

};
void Triangle::end(double x , double y ){
    action(x,y);
};
void Triangle::proceedMove(double x , double y ){
    action(x,y);
};

void Triangle::action(double x , double y ){
    draw->fill(qRgba(255,255,255,0));
    QPainter painter(draw);

    QPolygon triangle;

    if (first_x > x){

        triangle << QPoint(first_x,y) << QPoint(x,y) << QPoint(x+(first_x -x )/2,first_y);
    }
    else{
        triangle << QPoint(first_x,y) << QPoint(x,y) << QPoint(first_x + (x - first_x )/2,first_y);
    }

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
    painter.drawPolygon(triangle);

};
