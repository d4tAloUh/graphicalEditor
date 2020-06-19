#ifndef OVAL_H
#define OVAL_H

#include "tool_template.h"
#include "mainwindow.h"


class Oval: public virtual tool_template
{
public:
    Oval(MainWindow* root);
    void start( QImage* img, double x = 0 , double y = 0);
    void end(double x = 0, double y = 0);
    void proceedMove(double x = 0, double y = 0);
    void action(double x = 0, double y = 0);
private:
    QImage *draw;
    MainWindow *root;
    double first_x;
    double first_y;
};

#endif // OVAL_H
