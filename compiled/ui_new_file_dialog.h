/********************************************************************************
** Form generated from reading UI file 'new_file_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_FILE_DIALOG_H
#define UI_NEW_FILE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *widthLabel;
    QSpinBox *widthSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heightLabel;
    QSpinBox *heightSpinBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(320, 240);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 200, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 40, 211, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widthLabel = new QLabel(verticalLayoutWidget);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        QFont font;
        font.setPointSize(16);
        widthLabel->setFont(font);

        horizontalLayout->addWidget(widthLabel);

        widthSpinBox = new QSpinBox(verticalLayoutWidget);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(1920);
        widthSpinBox->setValue(1280);

        horizontalLayout->addWidget(widthSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        heightLabel = new QLabel(verticalLayoutWidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setFont(font);

        horizontalLayout_2->addWidget(heightLabel);

        heightSpinBox = new QSpinBox(verticalLayoutWidget);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(1080);
        heightSpinBox->setValue(720);

        horizontalLayout_2->addWidget(heightSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        widthLabel->setText(QCoreApplication::translate("Dialog", "Width", nullptr));
        heightLabel->setText(QCoreApplication::translate("Dialog", "Height", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_FILE_DIALOG_H
