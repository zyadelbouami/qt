#include "monaffichage.h"
#include "ui_monaffichage.h"
#include "QGraphicsScene"
#include "QGraphicsPixmapItem"
#include "QPixmap"

Monaffichage::Monaffichage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Monaffichage)
{
    ui->setupUi(this);

QGraphicsScene * ma_scene ;
ma_scene = new QGraphicsScene ();
QGraphicsPixmapItem * mon_item;
mon_item= new QGraphicsPixmapItem();
QPixmap * mon_image = new QPixmap ("");
mon_item->setPixmap(* mon_image);
ma_scene->addItem(mon_item);
ui->ma_vue->setScene(ma_scene);
}

Monaffichage::~Monaffichage()
{
    delete ui;
}
