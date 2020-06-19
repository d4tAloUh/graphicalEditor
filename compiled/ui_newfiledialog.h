/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newFileDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *widthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *heightSpinBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *newFileDialog)
    {
        if (newFileDialog->objectName().isEmpty())
            newFileDialog->setObjectName(QString::fromUtf8("newFileDialog"));
        newFileDialog->resize(320, 240);
        verticalLayoutWidget = new QWidget(newFileDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 281, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        widthSpinBox = new QSpinBox(verticalLayoutWidget);
        widthSpinBox->setObjectName(QString::fromUtf8("widthSpinBox"));
        widthSpinBox->setMinimum(1);
        widthSpinBox->setMaximum(1920);
        widthSpinBox->setValue(1280);

        horizontalLayout->addWidget(widthSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        heightSpinBox = new QSpinBox(verticalLayoutWidget);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setMinimum(1);
        heightSpinBox->setMaximum(1080);
        heightSpinBox->setValue(720);

        horizontalLayout_3->addWidget(heightSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayoutWidget_3 = new QWidget(newFileDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(150, 180, 158, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(horizontalLayoutWidget_3);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_4->addWidget(okButton);

        cancelButton = new QPushButton(horizontalLayoutWidget_3);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_4->addWidget(cancelButton);


        retranslateUi(newFileDialog);

        QMetaObject::connectSlotsByName(newFileDialog);
    } // setupUi

    void retranslateUi(QDialog *newFileDialog)
    {
        newFileDialog->setWindowTitle(QCoreApplication::translate("newFileDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("newFileDialog", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("newFileDialog", "Height", nullptr));
        okButton->setText(QCoreApplication::translate("newFileDialog", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("newFileDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newFileDialog: public Ui_newFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
