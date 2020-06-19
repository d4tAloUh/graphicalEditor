#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scene.h"
#include "tool_template.h"
#include "actions.h"
#include "tools.h"
#include <QColor>
#include "settings.h"
#include <QPushButton>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Scene;
class Actions;
class Tools;
class Settings;
class tool_template;

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void choosePencil();
    void chooseLine();
    void chooseRect();
    void chooseBrush();
    void chooseTriangle();
    void chooseStar();
    void chooseErase();
    void choosePippete();
    void new_file();
    void open_file();
    void chooseOval();
    void about();
    void save();
    void save_as();

public:
    void closeEvent(QCloseEvent* event);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Scene* getScene(){
        return scene;
    }
    tool_template* curTool(){
        return tool;
    }
    void setScene(Scene* Scene){
        scene = Scene;
    };
    void setActions(Actions* Actions){
        actions = Actions;
    }
    void setTool(tool_template* Tool){
        tool = Tool;
    }

    int getWidth(){
        return currentSize;
    }
    void setWidth(int width){
        currentSize = width;
    }
    void setFilled(bool value){
        filled = value;
    }
    bool getFilled(){
        return filled;
    }
    Ui::MainWindow *ui;
    QColor& getColor(){
        return currentColor;
    }
    void setColor(const QColor& color){
        currentColor = color;
    }
    QPushButton* getSelectedButton(){
        return selectedButton;
    }
    void setSelectedButton(QPushButton* button){
        selectedButton = button;
    }
    bool getSaved(){
        return saved;
    }
    void setSaved(bool value){
        saved = value;
    }

    QString getFilename() const;
    void setFilename(const QString &value);

private:
    QColor currentColor = Qt::black;
    mutable Scene *scene;
    mutable Actions *actions;
    mutable Tools *tools;
    mutable Settings *settings;
    double maxWidth = 1;
    double minWidth = 100;
    int currentSize = 30;
    bool filled = true;
    bool saved = true;
    QString filename;
    mutable tool_template *tool;
    mutable QPushButton* selectedButton = 0;

};
#endif // MAINWINDOW_H
