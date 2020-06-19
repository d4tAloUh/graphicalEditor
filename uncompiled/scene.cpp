#include "scene.h"
#include "mainwindow.h"
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>
#include <QDebug>
#include "ui_mainwindow.h"

Scene::Scene(MainWindow *root, QWidget *parent):QGraphicsScene(),root(root)
{
    pressed = false;
}
Scene::~Scene(){
    delete layer;
    delete image;
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
   if (event->button() == Qt::LeftButton){
       pressed = true;

       QPixmap imagePixMap(root->getScene()->width(),root->getScene()->height());
       imagePixMap.fill(Qt::transparent);
       image = new QImage(imagePixMap.toImage());

//       image = new QImage(QPixmap(root->ui->graphicsView->width()-10,root->ui->graphicsView->height()-10).toImage());
       *image = image->convertToFormat(QImage::Format_ARGB32);
       image->fill(qRgba(0,0,0,0));

       layer = new QGraphicsPixmapItem();
       root->getScene()->addItem(layer);
       root->setSaved(false);

       QPoint currPos = event->scenePos().toPoint();
       root->curTool()->start(image, currPos.x(), currPos.y());
       refresh_layer();
   }
};

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    if (pressed) {
        QPoint currPos = event->scenePos().toPoint();
        root->curTool()->proceedMove(currPos.x(),currPos.y());
        refresh_layer();
    }
}

void Scene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    if (event->button() == Qt::LeftButton){
        pressed = false;

        QPoint currPos = event->scenePos().toPoint();
        root->curTool()->end(currPos.x(),currPos.y());
        refresh_layer();
    }
};

void Scene::refresh_layer(){
    QPixmap pixmap;
    pixmap.convertFromImage(*image);
    layer->setPixmap(pixmap);
}
