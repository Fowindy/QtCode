#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = 0);

signals:

public slots:

private:
    //子窗体创建"切换到主窗体"按钮
    QPushButton sb;
};

#endif // SUBWIDGET_H
