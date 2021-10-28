#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsSimpleTextItem>
#include <QString>
#include "Columns.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void drawColumns(); //draw all columns on the canvas (QGraphicsScene object)
    void addColumn(int newColumnVal); //add a new column
    void clearCanvas(); //clear the canvas (QGraphicsScene object)
    void ChangeColor();//Change colour of column while sorting

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    //all columns are stored here
   Columns columns;

};
#endif // MAINWINDOW_H
