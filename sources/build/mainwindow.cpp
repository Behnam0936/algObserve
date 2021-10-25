#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(2);

    //addRect(offsetX,offsetY,width,height,outline,color)
    rectangle1 = scene->addRect(0,300,100,200,blackpen,blueBrush);
    rectangle2 = scene->addRect(150,350,100,150,blackpen,blueBrush);
    rectangle3 = scene->addRect(300,50,100,450,blackpen,blueBrush);
    rectangle4 = scene->addRect(450,200,100,300,blackpen,blueBrush);
    rectangle5 = scene->addRect(600,100,100,400,blackpen,blueBrush);

    //40 + 150*(number-1)
    text1 = scene->addSimpleText("200");
    text1->setPos(40,500);
    text2 = scene->addSimpleText("150");
    text2->setPos(190,500);
    text3 = scene->addSimpleText("450");
    text3->setPos(340,500);
    text4 = scene->addSimpleText("300");
    text4->setPos(490,500);
    text5 = scene->addSimpleText("400");
    text5->setPos(640,500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

