#include "tools.h"
#include "line.h"
#include "pencil.h"
#include "tool_template.h"
#include "rectangle.h"
#include "triangle.h"
#include "ui_mainwindow.h"
#include "eraser.h"
#include "pippete.h"
#include "brush.h"
#include "star.h"
#include "oval.h"

Tools::Tools(MainWindow* Root){
    root = Root;
    setupBackgroundButtons();
};

void Tools::setupBackgroundButtons(){

    root->ui->chooseStar->setStyleSheet(button_bg_str);
    QPixmap chooseStarIcon("D:\\POOP\\Graphic_editor\\resources\\star.png");
    QIcon starIcon(chooseStarIcon);
    root->ui->chooseStar->setIcon(starIcon);
    root->ui->chooseStar->setIconSize(chooseStarIcon.rect().size());

    root->ui->chooseLine->setStyleSheet(button_bg_str);
    QPixmap chooseLineIcon("D:\\POOP\\Graphic_editor\\resources\\Line.png");
    QIcon chooseLine(chooseLineIcon);
    root->ui->chooseLine->setIcon(chooseLine);
    root->ui->chooseLine->setIconSize(chooseLineIcon.rect().size());

    root->ui->chooseRect->setStyleSheet(button_bg_str);
    QPixmap chooseRectIcon("D:\\POOP\\Graphic_editor\\resources\\Square.png");
    QIcon chooseRect(chooseRectIcon);
    root->ui->chooseRect->setIcon(chooseRect);
    root->ui->chooseRect->setIconSize(chooseRectIcon.rect().size());

    root->ui->chooseErase->setStyleSheet(button_bg_str);
    QPixmap chooseEraseIcon("D:\\POOP\\Graphic_editor\\resources\\Erase.png");
    QIcon chooseErase(chooseEraseIcon);
    root->ui->chooseErase->setIcon(chooseErase);
    root->ui->chooseErase->setIconSize(chooseEraseIcon.rect().size());

    root->ui->chooseTriangle->setStyleSheet(button_bg_str);
    QPixmap chooseTriangleIcon("D:\\POOP\\Graphic_editor\\resources\\triangle.png");
    QIcon chooseTriangle(chooseTriangleIcon);
    root->ui->chooseTriangle->setIcon(chooseTriangle);
    root->ui->chooseTriangle->setIconSize(chooseTriangleIcon.rect().size());

    root->ui->choosePippete->setStyleSheet(button_bg_str);
    QPixmap choosePippeteIcon("D:\\POOP\\Graphic_editor\\resources\\Pipetka.png");
    QIcon choosePippete(choosePippeteIcon);
    root->ui->choosePippete->setIcon(choosePippete);
    root->ui->choosePippete->setIconSize(choosePippeteIcon.rect().size());

    root->ui->chooseBrush->setStyleSheet(button_bg_str);
    QPixmap chooseBrushIcon("D:\\POOP\\Graphic_editor\\resources\\Brush.png");
    QIcon chooseBrush(chooseBrushIcon);
     root->ui->chooseBrush->setIcon(chooseBrush);
     root->ui->chooseBrush->setIconSize(chooseBrushIcon.rect().size());

    root->ui->choosePencil->setStyleSheet(button_bg_str);
    QPixmap choosePencilIcon("D:\\POOP\\Graphic_editor\\resources\\pencil.png");
    QIcon choosePencil(choosePencilIcon);
    root->ui->choosePencil->setIcon(choosePencil);
   root->ui->choosePencil->setIconSize(choosePencilIcon.rect().size());

    root->ui->chooseOval->setStyleSheet(button_bg_str);
    QPixmap chooseOvalIcon("D:\\POOP\\Graphic_editor\\resources\\Oval.png");
    QIcon chooseOval(chooseOvalIcon);
    root->ui->chooseOval->setIcon(chooseOval);
    root->ui->chooseOval->setIconSize(chooseOvalIcon.rect().size());
}

void Tools::updateButtonsBackground(){
    if (root->getSelectedButton() != 0)
    root->getSelectedButton()->setStyleSheet(button_bg_str);
};
void Tools::chooseElipse(){
    updateButtonsBackground();
    Oval* oval = new Oval(root);
    root->setTool(oval);
    root->setSelectedButton(root->ui->chooseOval);
    root->ui->chooseOval->setStyleSheet(button_bg_selected_str);
};
void Tools::choose_line(){
    updateButtonsBackground();
    Line* lineTool = new Line(root);
    root->setTool(lineTool);
    root->setSelectedButton(root->ui->chooseLine);
    root->ui->chooseLine->setStyleSheet(button_bg_selected_str);
};

void Tools::choose_pencil(){
    updateButtonsBackground();
    Pencil* pencilTool = new Pencil(root);
    root->setTool(pencilTool);
    root->setSelectedButton(root->ui->choosePencil);
     root->ui->choosePencil->setStyleSheet(button_bg_selected_str);
};

void Tools::chooseRect(){
    updateButtonsBackground();
    Rectangle* rectTool = new Rectangle(root);
    root->setTool(rectTool);
    root->setSelectedButton(root->ui->chooseRect);
    root->ui->chooseRect->setStyleSheet(button_bg_selected_str);
};

void Tools::chooseTriangle(){
    updateButtonsBackground();
    Triangle* triangle = new Triangle(root);
    root->setTool(triangle);
    root->setSelectedButton(root->ui->chooseTriangle);
    root->ui->chooseTriangle->setStyleSheet(button_bg_selected_str);
};

void Tools::chooseErase(){
    updateButtonsBackground();
    Eraser* erase = new Eraser(root);
    root->setTool(erase);
    root->setSelectedButton(root->ui->chooseErase);
    root->ui->chooseErase->setStyleSheet(button_bg_selected_str);
};
void Tools::choosePippete(){
    updateButtonsBackground();
    Pippete* pippete = new Pippete(root);
    root->setTool(pippete);
    root->setSelectedButton(root->ui->choosePippete);
    root->ui->choosePippete->setStyleSheet(button_bg_selected_str);
}

void Tools::chooseBrush(){
    updateButtonsBackground();
    Brush* brush = new Brush(root);
    root->setTool(brush);
    root->setSelectedButton(root->ui->chooseBrush);
    root->ui->chooseBrush->setStyleSheet(button_bg_selected_str);
}
void Tools::chooseStar(){
    updateButtonsBackground();
    Star* star = new Star(root);
    root->setTool(star);
    root->setSelectedButton(root->ui->chooseStar);
    root->ui->chooseStar->setStyleSheet(button_bg_selected_str);
}
