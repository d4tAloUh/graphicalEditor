#ifndef SETTINGS_H
#define SETTINGS_H
#include "mainwindow.h"

class MainWindow;

class Settings: public QObject
{
    Q_OBJECT
public slots:
    void spin_changed();
    void slider_changed();
    void filled_changed();
    void chooseColor();
public:
    Settings(MainWindow* Root, QObject* parent = 0);
    virtual ~Settings(){};
private:
    MainWindow* root;
};

#endif // SETTINGS_H
