#include "Qt_Battery_View.h"

using namespace cv;
using namespace std;


Qt_Battery_View::Qt_Battery_View(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Qt_Battery_View::on_OpenFig_clicked()
{
	QString filename;
	filename = QFileDialog::getOpenFileName(this,
		tr("choose img"),
		"",
		tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
	if (filename.isEmpty())
	{
		return;
	}
	else
	{
		//QImage* img = new QImage;
		//if (!(img->load(filename))) //加载图像
		//{
		//	QMessageBox::information(this,
		//		tr("打开图像失败"),
		//		tr("打开图像失败!"));
		//	delete img;
		//	return;
		//}

		string str = filename.toStdString();  // 将filename转变为string类型；
		image = imread(str);
		//image=imread(fileName.toLatin1().data);
		cvtColor(image, image, CV_BGR2RGB);
		cv::resize(image, image, Size(300, 200));
		QImage img = QImage((const unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB888);
		label = new QLabel();
		label->setPixmap(QPixmap::fromImage(img));
		label->resize(QSize(img.width(), img.height()));
		ui.scrollArea->setWidget(label);
	}
}

void Qt_Battery_View::on_Progress_clicked()
{
	//读取图像
	dst_image = imread("C:\\Users\\Administrator\\Desktop\\2.jpg",1);
	//BGR转RGB
	cvtColor(dst_image, dst_image, CV_BGR2RGB);
	//修改图像大小
	cv::resize(dst_image, dst_image,Size(400,400));
	//创建一个QImage类存放图像
	QImage img1 = QImage((const unsigned char*)(dst_image.data), dst_image.cols, dst_image.rows, QImage::Format_RGB888);
	//创建一个QLabel类来显示图像
	label_2 = new QLabel();
	//将QImage的内容填入QLabel
	label_2->setPixmap(QPixmap::fromImage(img1));
//	label_2->resize(QSize(img1.width(), img1.height()));
	//设置ScrollArea显示的大小以及显示链接的label
	ui.scrollArea_2->setWidget(label_2);
	//scrollArea最大显示的长宽
	ui.scrollArea_2->setMaximumHeight(768);
	ui.scrollArea_2->setMaximumWidth(1024);
	ui.scrollArea_2->resize(QSize(img1.width()+5, img1.height()+5));
	//多余背景全黑
	ui.scrollArea_2->setBackgroundRole(QPalette::Dark);
	//显示图片
	ui.scrollArea_2->show();
}
