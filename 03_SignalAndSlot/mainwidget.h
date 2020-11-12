#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include "subwidget.h"
#include <QPushButton>

#include <QWidget>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
    //自定义改变按钮标题的槽函数
    void ChangeBtnTitile();
    //自定义窗体交互的槽函数
    void ExchangeWin();
    //自定义子窗体按钮槽函数
    void DealSub();
    //创建QPushButton变量
private:
    QPushButton b;
    QPushButton *b1;//指针
    //创建一个"切换到子窗体"的按钮
    QPushButton b2;
    //创建子窗体对象
    SubWidget sw;
};

#endif // MAINWIDGET_H
