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

    /*
     * 自定义槽函数,普通函数的用法
     * Qt5:槽函数可以是任意的成员函数,普通全局函数,静态函数
     * 槽函数需要和信号一致(参数,返回值)
     * 由于信号都是没有返回值的,所以,槽函数一定没有返回值
     *
*/
}

MainWidget::~MainWidget()
{

}
