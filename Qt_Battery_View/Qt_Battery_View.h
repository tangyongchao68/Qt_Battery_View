#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qt_Battery_View.h"
#include<QGraphicsScene>  
#include<QGraphicsView>                   //graphicsview��
#include <qlabel.h>                     //label��
#include<opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  //opencv����
#include <qfiledialog.h>                //getopenfilename ������
#include <qlabel.h>                     //label��
#include <qcombobox.h>
#include<qgridlayout.h>
using namespace cv;

class Qt_Battery_View : public QMainWindow
{
	Q_OBJECT


		//��Ӳۺ���
private slots:
	void on_OpenFig_clicked();
	//����ʽon_�ؼ���_clicked����������QT��Ĭ����ɺ����Ͱ�ť���������ӣ���������������Ļ���ȥ�����źŲۺ���
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
