#include "customertitlebarpro.h"

CustomerTitleBarPro::CustomerTitleBarPro(QWidget *parent)
	: BaseWindow(parent)
{
	ui.setupUi(this);
	// ��ʼ��������;
	initTitleBar();
}
