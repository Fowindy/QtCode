#include "mainwidget.h"
#include <QPushButton>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton b;
    b.setParent(this);
    b.setText("^_^");
    b.move(100,100);

    QPushButton b1(this);
    b.setText("ABC");
}

MainWidget::~MainWidget()
{

}
