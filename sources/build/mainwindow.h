#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QGraphicsSimpleTextItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle1;
    QGraphicsRectItem *rectangle2;
    QGraphicsRectItem *rectangle3;
    QGraphicsRectItem *rectangle4;
    QGraphicsRectItem *rectangle5;

    QGraphicsSimpleTextItem *text1;
    QGraphicsSimpleTextItem *text2;
    QGraphicsSimpleTextItem *text3;
    QGraphicsSimpleTextItem *text4;
    QGraphicsSimpleTextItem *text5;

};
#endif // MAINWINDOW_H
