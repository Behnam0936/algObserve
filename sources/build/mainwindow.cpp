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
    rectangle = scene->addRect(10,20,100,200,blackpen,blueBrush);
}

MainWindow::~MainWindow()
{
    delete ui;
}

