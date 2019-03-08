#include "Qt_Battery_View.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt_Battery_View w;
	w.show();
	return a.exec();
}
