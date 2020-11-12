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
    /*
     * 信号必须有signals关键字来声明
     * 信号没有返回值,但可以有参数
     * 信号就是函数的声明,只需声明,无需定义
     * 使用:emit mySignal();
*/

public slots:

private:
    //子窗体创建"切换到主窗体"按钮
    QPushButton sb;
};

#endif // SUBWIDGET_H
