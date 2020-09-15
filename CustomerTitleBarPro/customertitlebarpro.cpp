#include "customertitlebarpro.h"

CustomerTitleBarPro::CustomerTitleBarPro(QWidget *parent)
	: BaseWindow(parent)
{
	ui.setupUi(this);
	// 初始化标题栏;
	initTitleBar();
}
