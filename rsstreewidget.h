#ifndef RSSTREEWIDGET_H
#define RSSTREEWIDGET_H

#include <QTreeWidget>
#include <QMenu>
#include <QtDebug>
#include <QCursor>

class RssTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    explicit RssTreeWidget(QWidget *parent = 0);

private slots:

    //https://gist.github.com/jmk/3906292
    void onCustomContextMenuRequested(const QPoint& pos) {
        qInfo() << "CLICKED!!!";
        QTreeWidgetItem* item = currentItem();
        qInfo() << "TEXT : " << item->text(0);
        QMenu menu(this);

        //http://doc.qt.io/qt-5/qtwidgets-mainwindows-menus-example.html
        auto newAct = new QAction(tr("&New"), this);
        newAct->setShortcuts(QKeySequence::New);
        newAct->setStatusTip(tr("Create a new file"));
        menu.addAction(newAct);

        menu.exec(QCursor::pos());


        //QTreeWidgetItem* item = itemAt(pos);

/*
        if (item) {
            // Note: We must map the point to global from the viewport to
            // account for the header.
            showContextMenu(item, viewport()->mapToGlobal(pos));
        }*/
    }


signals:

public slots:
};

#endif // RSSTREEWIDGET_H
