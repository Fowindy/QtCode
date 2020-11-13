﻿#pragma execution_character_set("utf-8")
#include "MyWidget.h"
#include "QPushButton"


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

	/**
	 * 对于子窗口(子窗口),坐标系统相当于父窗体
	 原点:相对于父窗体左下角(不包括边框)
	 x:往右递增
	 y:往左递增
	 */
	QPushButton *b1 = new QPushButton(this);
	b1->move(0, 0);
	b1->setText("^_^");
}