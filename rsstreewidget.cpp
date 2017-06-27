#include "rsstreewidget.h"


RssTreeWidget::RssTreeWidget(QWidget *parent) : QTreeWidget(parent)
{    
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this,
            SIGNAL(customContextMenuRequested(const QPoint&)),
            SLOT(onCustomContextMenuRequested(const QPoint&))
    );
}
