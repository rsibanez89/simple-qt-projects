#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsEllipseItem"
#include "QGraphicsScene"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // We define the ellipse we are going to draw
    QGraphicsEllipseItem * ellipse = new QGraphicsEllipseItem();
    // We set the size of the ellipse
    ellipse->setRect(50,50,150,100);
    // We define a scene that will contain the ellipse and will be drawn on the graphics view
    QGraphicsScene * scene = new QGraphicsScene();
    // We add the ellipse to the scene
    scene->addItem(ellipse);
    // We set the scene in the graphics view
    ui->graphicsView->setScene(scene);
}
