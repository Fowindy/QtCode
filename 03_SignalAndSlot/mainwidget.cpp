#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    b.setParent(this);
    b.setText("^_^");
    b.move(100,100);

    //b1为指针,需要动态分配空间
    b1 = new QPushButton(this);
    b1->setText("ABC");
}

MainWidget::~MainWidget()
{

}
