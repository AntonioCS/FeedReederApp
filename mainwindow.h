#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QTreeWidgetItem>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

private:
    Ui::MainWindow *ui;

private:
    void AddRoot(QString name, QString description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString description);
    //auto TreeWidgetItem(QString name, QTreeWidget *parent = nullptr);
    /*
    auto *itm = new QTreeWidgetItem(ui->treeWidget);

    itm->setText(0, name);
    itm->setText(1, description);*/
};

#endif // MAINWINDOW_H
