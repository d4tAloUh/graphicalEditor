#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"
#include "actions.h"
#include "tools.h"
#include "settings.h"
#include <QColor>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    actions = new Actions(this);
    tools = new Tools(this);
    settings = new Settings(this);
    tools->chooseBrush();
    connect(ui->choosePencil,SIGNAL(clicked()), this ,SLOT(choosePencil()));
    connect(ui->chooseLine,  SIGNAL(clicked()), this ,SLOT(chooseLine()));
    connect(ui->chooseRect,  SIGNAL(clicked()), this ,SLOT(chooseRect()));
    connect(ui->chooseTriangle,  SIGNAL(clicked()), this ,SLOT(chooseTriangle()));
    connect(ui->chooseErase,  SIGNAL(clicked()), this ,SLOT(chooseErase()));
    connect(ui->choosePippete,  SIGNAL(clicked()), this ,SLOT(choosePippete()));
    connect(ui->chooseBrush,  SIGNAL(clicked()), this ,SLOT(chooseBrush()));
    connect(ui->chooseStar,  SIGNAL(clicked()), this ,SLOT(chooseStar()));
    connect(ui->chooseOval,  SIGNAL(clicked()), this ,SLOT(chooseOval()));
    connect(ui->actionNew_File, SIGNAL(triggered(bool)), this, SLOT(new_file()));
    connect(ui->actionSave_File, SIGNAL(triggered(bool)), this, SLOT(save()));
    connect(ui->actionSave_as, SIGNAL(triggered(bool)), this, SLOT(save_as()));
    connect(ui->actionOpen_File, SIGNAL(triggered(bool)), this, SLOT(open_file()));
    connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(about()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete actions;
    delete tools;
}

void MainWindow::about(){
    QMessageBox::about(this,tr("Про графічний редактор"),
                       tr("<p><b>Графічний редактор</b> дозволяє малювати основні геометричні "
                            "фігури, за допомогою функцій, які надає QPainter."
                            "Датчики слідкують за діями користувача мишою.  </p>"
                            "<p> Було довизначено датчики MousePressedEvent, MouseMovedEvent, MouseReleaseEvent, "
                            "щоб малювати обраним інструментом на QGraphicsScene."
                            "Також було довизначено датчик закриття програми, щоб застерегти користувача "
                            "від втрати намальованих фігур.</p>"
                            "<p> Також графічний редактор має функції відкриття та зберігання малюнків. </p>"));
}
void MainWindow::open_file(){
    actions->openFile();
};

void MainWindow::save(){
    actions->saveFile();
};
void MainWindow::save_as(){
    actions->saveAs();
};


QString MainWindow::getFilename() const
{
    return filename;
}

void MainWindow::setFilename(const QString &value)
{
    filename = value;
}

void MainWindow::closeEvent(QCloseEvent* event){
    if (actions->CloseFile()){
        event->accept();
        QMainWindow::closeEvent(event);
    }
    else{
        event->ignore();
    }
};

void MainWindow::new_file(){
    actions->newFile();
};
void MainWindow::choosePencil(){
    tools->choose_pencil();
}

void MainWindow::chooseOval(){
    tools->chooseElipse();
};
void MainWindow::chooseLine(){
    tools->choose_line();
}

void MainWindow::chooseRect(){
    tools->chooseRect();
}

void MainWindow::chooseTriangle(){
    tools->chooseTriangle();
};

void MainWindow::chooseErase(){
    tools->chooseErase();
};

void MainWindow::choosePippete(){
    tools->choosePippete();
};

void MainWindow::chooseBrush(){
    tools->chooseBrush();
}
void MainWindow::chooseStar(){
    tools->chooseStar();
}

