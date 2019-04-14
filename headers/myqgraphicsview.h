#ifndef MYQGRAPHICSVIEW_H
#define MYQGRAPHICSVIEW_H

#include <QObject>
#include <QWidget>
#include <QGraphicsView>

class myQGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit myQGraphicsView(QWidget *parent = nullptr);

    void resizeEvent(QResizeEvent *);
};

#endif // MYQGRAPHICSVIEW_H
