#ifndef TOOL_TEMPLATE_H
#define TOOL_TEMPLATE_H
#include "mainwindow.h"
#include <QPainter>

class tool_template
{
public:
    virtual void start( QImage* img, double x = 0 , double y = 0) = 0;
    virtual void end(double x = 0, double y = 0) = 0;
    virtual void proceedMove(double x = 0, double y = 0) = 0;
    virtual void action(double x = 0, double y = 0) = 0;
};

#endif // TOOL_TEMPLATE_H
