#ifndef EXITDIALOG_H
#define EXITDIALOG_H

#include <QDialog>

namespace Ui {
class exitDialog;
}

class exitDialog : public QDialog
{
    Q_OBJECT
public slots:
    void closed();
    void proceed();
public:
    explicit exitDialog(QWidget *parent = nullptr);
    ~exitDialog();
    Ui::exitDialog *ui;

};

#endif // EXITDIALOG_H
