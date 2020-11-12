#include "mainwidget.h"
#include <QApplication>
<<<<<<< HEAD
=======
#include "subwidget.h"
>>>>>>> 8687843014c57c15e057ed2cda3678807f2e2a15
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;//先执行MainWidget基类的构造函数
    w.show();

<<<<<<< HEAD

=======
    //创建子窗体对象
    SubWidget sw;
    sw.show();
>>>>>>> 8687843014c57c15e057ed2cda3678807f2e2a15
    return a.exec();
}
