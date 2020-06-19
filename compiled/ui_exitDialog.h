/********************************************************************************
** Form generated from reading UI file 'exitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXITDIALOG_H
#define UI_EXITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exitDialog
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *yesButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *exitDialog)
    {
        if (exitDialog->objectName().isEmpty())
            exitDialog->setObjectName(QString::fromUtf8("exitDialog"));
        exitDialog->resize(320, 240);
        label = new QLabel(exitDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 281, 71));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(exitDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 150, 281, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        yesButton = new QPushButton(horizontalLayoutWidget);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));

        horizontalLayout->addWidget(yesButton);

        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(exitDialog);

        QMetaObject::connectSlotsByName(exitDialog);
    } // setupUi

    void retranslateUi(QDialog *exitDialog)
    {
        exitDialog->setWindowTitle(QCoreApplication::translate("exitDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("exitDialog", "Discard Changes?", nullptr));
        yesButton->setText(QCoreApplication::translate("exitDialog", "Yes", nullptr));
        cancelButton->setText(QCoreApplication::translate("exitDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exitDialog: public Ui_exitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXITDIALOG_H
