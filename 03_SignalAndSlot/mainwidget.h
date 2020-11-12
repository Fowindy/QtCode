#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include <QPushButton>

#include <QWidget>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
    //创建QPushButton变量
private:
    QPushButton b;
    QPushButton *b1;//指针
};

#endif // MAINWIDGET_H
