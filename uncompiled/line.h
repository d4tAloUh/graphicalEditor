#ifndef LINE_H
#define LINE_H
#include "mainwindow.h"
#include "QPainter"
#include "tool_template.h"

class MainWindow;

class Line: public virtual tool_template
{
public:
    Line(MainWindow* root);
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

#endif // LINE_H
