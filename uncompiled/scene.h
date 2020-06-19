#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <mainwindow.h>

class MainWindow;

class Scene: public QGraphicsScene
{
    Q_OBJECT
public:
    Scene(MainWindow *root, QWidget *parent=0);
    ~Scene();
    void refresh_layer();
    void setRoot(MainWindow* Root){
        root = Root;
    }
private:
    MainWindow *root;
    QGraphicsPixmapItem *layer;
    QImage *image;
    bool pressed;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

};

#endif // SCENE_H
