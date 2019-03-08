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
		//if (!(img->load(filename))) //����ͼ��
		//{
		//	QMessageBox::information(this,
		//		tr("��ͼ��ʧ��"),
		//		tr("��ͼ��ʧ��!"));
		//	delete img;
		//	return;
		//}

		string str = filename.toStdString();  // ��filenameת��Ϊstring���ͣ�
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
	//��ȡͼ��
	dst_image = imread("C:\\Users\\Administrator\\Desktop\\2.jpg",1);
	//BGRתRGB
	cvtColor(dst_image, dst_image, CV_BGR2RGB);
	//�޸�ͼ���С
	cv::resize(dst_image, dst_image,Size(400,400));
	//����һ��QImage����ͼ��
	QImage img1 = QImage((const unsigned char*)(dst_image.data), dst_image.cols, dst_image.rows, QImage::Format_RGB888);
	//����һ��QLabel������ʾͼ��
	label_2 = new QLabel();
	//��QImage����������QLabel
	label_2->setPixmap(QPixmap::fromImage(img1));
//	label_2->resize(QSize(img1.width(), img1.height()));
	//����ScrollArea��ʾ�Ĵ�С�Լ���ʾ���ӵ�label
	ui.scrollArea_2->setWidget(label_2);
	//scrollArea�����ʾ�ĳ���
	ui.scrollArea_2->setMaximumHeight(768);
	ui.scrollArea_2->setMaximumWidth(1024);
	ui.scrollArea_2->resize(QSize(img1.width()+5, img1.height()+5));
	//���౳��ȫ��
	ui.scrollArea_2->setBackgroundRole(QPalette::Dark);
	//��ʾͼƬ
	ui.scrollArea_2->show();
}
