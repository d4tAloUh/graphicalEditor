#ifndef ACTIONS_H
#define ACTIONS_H
#include "mainwindow.h"
#include "newfiledialog.h"
#include "exitdialog.h"


class MainWindow;
class newFileDialog;
class exitDialog;

class Actions
{
public:
    Actions(MainWindow *root);
    ~Actions();
    void newFile();
    void saveFile();
    void saveAs();
    void openFile();
    bool CloseFile();
private:
    MainWindow* root;
    newFileDialog* newDialog;
    exitDialog* exitDialogWindow;
};

#endif // ACTIONS_H
