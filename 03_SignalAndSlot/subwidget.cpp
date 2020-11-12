#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("子窗体");

    sb.setParent(this);
    sb.setText("切换到主窗体");
    sb.move(50,50);
}
