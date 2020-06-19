#ifndef TOOLS_H
#define TOOLS_H

#include <QColor>


class MainWindow;

class Tools
{
public:
    Tools(MainWindow* Root);
    void updateButtonsBackground();

    void choose_pencil();
    void choose_line();
    void chooseRect();
    void chooseBrush();
    void chooseTriangle();
    void chooseStar();
    void chooseErase();
    void choosePippete();
    void chooseElipse();
    void setupBackgroundButtons();
private:
    MainWindow* root;

    QColor button_bg = QColor(179, 255, 204);
    QString button_bg_str = "background-color: " + button_bg.name();

    QColor button_selected_bh = QColor(0, 179, 60);
    QString button_bg_selected_str = "background-color: " + button_selected_bh.name();
};

#endif // TOOLS_H
