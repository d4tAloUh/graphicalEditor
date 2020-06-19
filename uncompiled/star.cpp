#include "star.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>

Star::Star(MainWindow* root):root(root)
{

}
void Star::start( QImage* img, double x, double y){
    first_x = x;
    first_y = y;
    draw = img;

};
void Star::end(double x , double y ){
    action(x,y);
};
void Star::proceedMove(double x , double y ){
    action(x,y);
};

void Star::action(double x , double y ){
    draw->fill(qRgba(255,255,255,0));
    QPainter painter(draw);

    QPolygon star;


    star << QPoint(first_x + (x - first_x)/2, y) <<
                   QPoint(first_x + (x - first_x)*0.625, y + (first_y-y)*0.29) <<
                   QPoint(x,y + (first_y-y)*0.375) <<
                   QPoint (first_x + (x - first_x)*0.75, y + (first_y-y)*0.625) <<
                   QPoint(first_x + (x - first_x)*0.875, first_y) <<
                   QPoint(first_x + (x - first_x)*0.5,y +  (first_y-y)*0.75) <<
                   QPoint(first_x + (x - first_x)*0.125, first_y) <<
                   QPoint(first_x + (x - first_x)*0.25, y + (first_y-y)*0.625) <<
                   QPoint(first_x, y+ (first_y-y)*0.375) <<
                   QPoint(first_x + (x - first_x)*0.375, y + (first_y-y)*0.29);

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
    painter.drawPolygon(star);

};
