#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Battery_View.h"
#include<QGraphicsScene>  
#include<QGraphicsView>                   //graphicsview类
#include <qlabel.h>                     //label类
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  //opencv申明
#include <qfiledialog.h>                //getopenfilename 类申明
#include <qlabel.h>                     //label类
#include <qcombobox.h>
#include<qgridlayout.h>
using namespace cv;

class Qt_Battery_View : public QMainWindow
{
	Q_OBJECT


		//添加槽函数
private slots:
	void on_OpenFig_clicked();
	//按格式on_控件名_clicked命名函数，QT会默认完成函数和按钮动作的链接，如果不这样命名的话就去设置信号槽函数
	void on_Progress_clicked();
public:
	Qt_Battery_View(QWidget *parent = Q_NULLPTR);

private:
	Ui::Qt_Battery_ViewClass ui;
	Mat image;
	Mat dst_image;
	QLabel *label;
	QLabel *label_2;
};
