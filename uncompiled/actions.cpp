#include "actions.h"
#include "mainwindow.h"
#include "scene.h"
#include <ui_mainwindow.h>
#include <QtDebug>
#include <QFileDialog>
#include "newfiledialog.h"
#include "exitdialog.h"
#include "ui_newfiledialog.h"
#include "ui_exitDialog.h"
#include <QPoint>

Actions::Actions(MainWindow* root):root(root)
{
    newDialog = new newFileDialog();
    exitDialogWindow = new exitDialog();

//    Scene* scene = new Scene(root);
//    root->setScene(scene);
//    root->ui->graphicsView->setScene(root->getScene());

//    QPixmap white_sheet(root->ui->graphicsView->width(),root->ui->graphicsView->height());
//    white_sheet.fill();
//    QGraphicsPixmapItem background(white_sheet);
//    root->getScene()->addItem(&background);
    newFile();

}
Actions::~Actions(){

}

void Actions::newFile(){

    if (!CloseFile())
        return;

    int val = newDialog->exec();

    if (val == 0)
        return;

    Scene* scene = new Scene(root);
    root->setScene(scene);
    root->ui->graphicsView->setScene(root->getScene());

    QPixmap white_sheet(newDialog->ui->widthSpinBox->value(),newDialog->ui->heightSpinBox->value());
    white_sheet.fill();

    QGraphicsPixmapItem background(white_sheet);
    root->getScene()->addItem(&background);

    QRectF sceneRect = scene->itemsBoundingRect();
    scene->setSceneRect(sceneRect);
    root->ui->graphicsView->setFixedSize(newDialog->ui->widthSpinBox->value()+11,newDialog->ui->heightSpinBox->value()+11);
//    root->ui->graphicsView->fitInView(sceneRect,Qt::KeepAspectRatio);

};
void Actions::saveFile(){
    if (root->getFilename().isEmpty())
        saveAs();
    else{

        QPixmap image(root->getScene()->width(),root->getScene()->height());
        image.fill(Qt::transparent);
        QPainter painter(&image);
        root->getScene()->render(&painter);

        image.save(root->getFilename());
//        QImage savedImage(image.size(), QImage::Format_ARGB32);
//        QPixmap pixmap1;
//        pixmap1.fromImage(savedImage);
//        QPainter copy(&pixmap1);
//        copy.setCompositionMode(QPainter::CompositionMode_DestinationIn);
//        copy.drawImage(0,0,image.toImage());
//        qInfo() << root->getFilename();
//        savedImage.save(root->getFilename());
        root->setSaved(true);
    }

};
void Actions::saveAs(){
    if (root->getScene() == 0 || root->getSaved())
        return;
    QString fileName = QFileDialog::getSaveFileName(root,"Save file","","Images (*.jpg *.jpeg *.png)");

    if (!fileName.isEmpty()){
        fileName = fileName.left(fileName.lastIndexOf(QChar('.'))).append(".png");
        root->setFilename(fileName);
        saveFile();
    }
};
void Actions::openFile(){

//    if (!CloseFile())
//        return;

    QString fileName = QFileDialog::getOpenFileName(root,"Open file","","Images (*.jpg *.jpeg *.png)");



    if (fileName.isEmpty())
        return;

    root->setFilename(fileName);
    if (root->getScene() == 0){
//    delete root->getScene();
        Scene* scene = new Scene(root);
        root->setScene(scene);
        root->ui->graphicsView->setScene(root->getScene());
    }

    QPixmap imagepixmap(fileName);

    root->getScene()->addPixmap(imagepixmap.scaledToWidth(root->ui->graphicsView->width(), Qt::SmoothTransformation));
};
bool Actions::CloseFile(){
    if (!root->getSaved()){
        int val = exitDialogWindow->exec();
        if (val == 0){
            return false;
        }
    }
    root->setFilename("");
    root->setScene(0);
    root->ui->graphicsView->setScene(0);
    root->setSaved(true);
    return true;
};
