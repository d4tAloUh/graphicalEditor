#ifndef NEWFILEDIALOG_H
#define NEWFILEDIALOG_H

#include <QDialog>

namespace Ui {
class newFileDialog;
}

class newFileDialog : public QDialog
{
    Q_OBJECT
public slots:
    void closed();
    void proceed();
public:
    explicit newFileDialog(QWidget *parent = nullptr);
    ~newFileDialog();
    Ui::newFileDialog *ui;

};

#endif // NEWFILEDIALOG_H
