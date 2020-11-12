#include <QApplication>
#include <QWidget> //窗口控件基类
#include <QPushButton>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    QWidget w;
    w.setWindowTitle("主要看气质");  //设置标题
    w.show();

    QPushButton b;
    b.setText("^_^");   //给按钮设置内容,对象和对象(窗口和窗口)没有关系,相互独立
    b.show();
    app.exec();
    return 0;
}
