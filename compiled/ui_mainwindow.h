/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionSave_as;
    QAction *actionAbout;
    QAction *actionNew_File;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *buttonLayout;
    QPushButton *choosePencil;
    QPushButton *chooseStar;
    QPushButton *chooseBrush;
    QPushButton *chooseLine;
    QPushButton *chooseTriangle;
    QPushButton *chooseRect;
    QPushButton *chooseErase;
    QPushButton *choosePippete;
    QPushButton *chooseOval;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QPushButton *selectColor;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1321, 866);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QString::fromUtf8("actionNew_File"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 90, 1291, 731));
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 4, 781, 81));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonLayout = new QGridLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        choosePencil = new QPushButton(horizontalLayoutWidget_2);
        choosePencil->setObjectName(QString::fromUtf8("choosePencil"));

        buttonLayout->addWidget(choosePencil, 0, 0, 1, 1);

        chooseStar = new QPushButton(horizontalLayoutWidget_2);
        chooseStar->setObjectName(QString::fromUtf8("chooseStar"));

        buttonLayout->addWidget(chooseStar, 1, 1, 1, 1);

        chooseBrush = new QPushButton(horizontalLayoutWidget_2);
        chooseBrush->setObjectName(QString::fromUtf8("chooseBrush"));

        buttonLayout->addWidget(chooseBrush, 1, 2, 1, 1);

        chooseLine = new QPushButton(horizontalLayoutWidget_2);
        chooseLine->setObjectName(QString::fromUtf8("chooseLine"));

        buttonLayout->addWidget(chooseLine, 0, 1, 1, 1);

        chooseTriangle = new QPushButton(horizontalLayoutWidget_2);
        chooseTriangle->setObjectName(QString::fromUtf8("chooseTriangle"));

        buttonLayout->addWidget(chooseTriangle, 1, 0, 1, 1);

        chooseRect = new QPushButton(horizontalLayoutWidget_2);
        chooseRect->setObjectName(QString::fromUtf8("chooseRect"));

        buttonLayout->addWidget(chooseRect, 0, 2, 1, 1);

        chooseErase = new QPushButton(horizontalLayoutWidget_2);
        chooseErase->setObjectName(QString::fromUtf8("chooseErase"));

        buttonLayout->addWidget(chooseErase, 0, 3, 1, 1);

        choosePippete = new QPushButton(horizontalLayoutWidget_2);
        choosePippete->setObjectName(QString::fromUtf8("choosePippete"));

        buttonLayout->addWidget(choosePippete, 1, 3, 1, 1);

        chooseOval = new QPushButton(horizontalLayoutWidget_2);
        chooseOval->setObjectName(QString::fromUtf8("chooseOval"));

        buttonLayout->addWidget(chooseOval, 0, 4, 1, 1);


        horizontalLayout_2->addLayout(buttonLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(horizontalLayoutWidget_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(30);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(horizontalLayoutWidget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        spinBox->setSingleStep(1);
        spinBox->setValue(30);

        horizontalLayout->addWidget(spinBox);


        horizontalLayout_2->addLayout(horizontalLayout);

        selectColor = new QPushButton(horizontalLayoutWidget_2);
        selectColor->setObjectName(QString::fromUtf8("selectColor"));
        selectColor->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0)"));

        horizontalLayout_2->addWidget(selectColor);

        checkBox = new QCheckBox(horizontalLayoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font1;
        font1.setPointSize(14);
        checkBox->setFont(font1);

        horizontalLayout_2->addWidget(checkBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1321, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setTearOffEnabled(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_File);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        choosePencil->setText(QCoreApplication::translate("MainWindow", "Pencil", nullptr));
        chooseStar->setText(QCoreApplication::translate("MainWindow", "Star", nullptr));
        chooseBrush->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        chooseLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        chooseTriangle->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        chooseRect->setText(QCoreApplication::translate("MainWindow", "Rect", nullptr));
        chooseErase->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        choosePippete->setText(QCoreApplication::translate("MainWindow", "Pipette", nullptr));
        chooseOval->setText(QCoreApplication::translate("MainWindow", "Oval", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        selectColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Filled", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
