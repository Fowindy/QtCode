#include "mainwidget.h"
#include <QApplication>
#include "subwidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;//先执行MainWidget基类的构造函数
    w.show();

    //创建子窗体对象
    SubWidget sw;
    sw.show();
    return a.exec();
}
