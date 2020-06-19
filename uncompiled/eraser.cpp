#include "eraser.h"



Eraser::Eraser(MainWindow* root):root(root)
{

}


void Eraser::start( QImage* img, double x, double y){
    last_x = x;
    last_y = y;
    draw = img;
    action(x,y);

};
void Eraser::end(double x , double y ){
    action(x,y);
};
void Eraser::proceedMove(double x , double y ){
    action(x,y);
};

void Eraser::action(double x , double y ){
    QPainter painter(draw);
    QPen pen;
    pen.setWidth(root->getWidth());
    pen.setColor(Qt::white);
    painter.setPen(pen);
    painter.drawEllipse(x-root->getWidth()/2,y - root->getWidth()/2,root->getWidth(),root->getWidth());
    last_y = y;
    last_x = x;

};
