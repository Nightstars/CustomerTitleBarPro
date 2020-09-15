#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_customertitlebarpro.h"
#include "basewindow.h"

class CustomerTitleBarPro : public BaseWindow
{
	Q_OBJECT

public:
	CustomerTitleBarPro(QWidget *parent = Q_NULLPTR);

private:
	Ui::CustomerTitleBarProClass ui;
};
