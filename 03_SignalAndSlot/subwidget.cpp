#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("子窗体");

    sb.setParent(this);
    sb.setText("切换到主窗体");
    sb.move(50,50);

    //子窗体按钮触发
    connect(&sb,&QPushButton::clicked,this,&SubWidget::SendSlot);
}
void SubWidget::SendSlot()
{
    //按下按钮,发送信号
    emit mySignal();
}
