#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_gameView = new myQGraphicsView(this);


    QGraphicsScene *scene = new QGraphicsScene(this);

//    scene->addPixmap();
    ui->verticalLayout->addWidget(m_gameView);
}

MainWindow::~MainWindow()
{
    delete ui;
}
