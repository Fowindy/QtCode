#pragma execution_character_set("utf-8")
#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
	: QWidget(parent)
{
	//因为move是从QWidget继承过来的,所以按钮和窗口都可以使用
	/**
	 * 对于父窗口(主窗口),坐标系统相当于屏幕
	 原点:相对于屏幕左下角
	 x:往右递增
	 y:往左递增
	 */
	move(100, 100);
}
