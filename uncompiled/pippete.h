#ifndef PIPPETE_H
#define PIPPETE_H

#include "tool_template.h"
#include "mainwindow.h"

class MainWindow;


class Pippete: public virtual tool_template
{
public:
    Pippete(MainWindow* root);
    void start(QImage* img, double x = 0 , double y = 0);
    void end(double x = 0, double y = 0);
    void proceedMove(double x = 0, double y = 0);
    void action(double x = 0, double y = 0);
private:
    QImage *draw;
    MainWindow *root;
    double last_x;
    double last_y;
};


#endif // PIPPETE_H
