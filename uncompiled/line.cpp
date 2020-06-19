#include "line.h"
#include "mainwindow.h"
#include <QPainter>
#include "ui_mainwindow.h"
#include <QtDebug>
Line::Line(MainWindow* root):root(root)
{

}
void Line::start( QImage* img, double x, double y){
    first_x = x;
    first_y = y;
    draw = img;
//    action(x,y);

};
void Line::end(double x , double y ){
    action(x,y);
};
void Line::proceedMove(double x , double y ){
    action(x,y);
};

void Line::action(double x , double y ){
    draw->fill(qRgba(255,255,255,0));

    QLine line(first_x,first_y,x,y);
    QPainter painter(draw);

    QPen pen;
    pen.setWidth(root->getWidth());
    pen.setColor(root->getColor());

    painter.setPen(pen);

    painter.drawLine(line);

};
