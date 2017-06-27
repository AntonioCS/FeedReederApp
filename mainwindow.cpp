#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rsstreewidget->header()->close();
    //ui->rsstreewidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    AddRoot("Hello", "World");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::AddRoot(QString name, QString description) {
    auto *itm = new QTreeWidgetItem(ui->rsstreewidget);


    itm->setText(0, name);   
    AddChild(itm, "Hello!!", "dssdfdfs");
    //itm->setText(1, description);

    //ui->treeWidget->addTopLevelItem(itm);
}

void MainWindow::AddChild(QTreeWidgetItem *parent, QString name, QString description) {
    auto *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    parent->addChild(itm);
}

