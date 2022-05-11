#pragma once

#include "wx/wx.h"
#include"MainWindow.h"
class App:public wxApp
{
public:
	App();
	~App();
private:
	MainWindow* mainWindow = nullptr;
public:

	virtual bool OnInit();
};

