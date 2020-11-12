#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    b.setParent(this);
    b.setText("关闭");
    b.move(100,100);

    //b1为指针,需要动态分配空间
    b1 = new QPushButton(this);
    b1->setText("ABC");

    connect(&b,&QPushButton::pressed,this,&MainWidget::close);
    /*
     * &b:信号发出者,指针类型
     * &QPushButton::pressed:处理信号   &发送者的类名::信号名字
     * this:信号接收者
     * &MainWidget::close:槽函数,信号处理函数    &接收者的类名::槽函数名字
*/
}

MainWidget::~MainWidget()
{

}
