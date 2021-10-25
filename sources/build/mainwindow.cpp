#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    MainWindow::drawColumns();
}

//clear the canvas (QGraphicsScene object)
void MainWindow::clearCanvas(){
    scene->clear();
}

//add a new column
void MainWindow::addColumn(int newColumnVal){ //add a new column
    this->columns.addColumn(newColumnVal);
}

//draw all columns on the canvas (QGraphicsScene object)
void MainWindow::drawColumns(){
    //set the drawing tools we want to use
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(2);

    //draw one rectangle and one text for each column on the canvas (QGraphicsScene object)
    for(int i=0;i < this->columns.numberOfColumns();i++) {
        //the max height of a column on the canvas is 1000, which occurs when it's value is 100
        //the min height of a column on the canvas is 10, which occurs when it's value is 1

        //parameters: offsetX,offsetY,width,height,outline,color
        int offsetX = 20 * (i+1) + 10 * (i);
        int offsetY = 1000 - (this->columns.nthColumnVal(i) * 10);
        int width = 20;
        int height = 10 * this->columns.nthColumnVal(i);

        scene->addRect(offsetX,offsetY,width,height,blackpen,blueBrush);
        QGraphicsSimpleTextItem *newText = scene->addSimpleText( QString::number(this->columns.nthColumnVal(i)) );
        //parameters: offsetX,offsetY
        newText->setPos(5 + (20 * (i+1) + 10 * (i)) ,1000);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//When the user clicks the "Add to dataset" button,
//read the user input and invoke the appropriate function
void MainWindow::on_pushButton_clicked()
{
    //read the number the user typed in
    QString number = ui->lineEdit->text();
    //clear the canvas
     clearCanvas();
    //convert the number to int type and invoke
    addColumn(number.toInt());
    //redraw the canvas
    drawColumns();
}
