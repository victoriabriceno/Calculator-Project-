#pragma once
#include"wx/wx.h"
class MainWindow:public wxFrame
{
public:
	MainWindow();
	~MainWindow();
public:

	//0-9 BUTTONS
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;

	//CALCULATOR STUFF
	wxButton* btnSUM = nullptr;
	wxButton* btnSUB = nullptr;
	wxButton* btnMULTI = nullptr;
	wxButton* btnDIV = nullptr;
	wxButton* btnHEX = nullptr;
	wxButton* btnBIN = nullptr;
	wxButton* btnDEC = nullptr;
	wxButton* btnEQUAL = nullptr;

	wxButton* btnNEGATIVE = nullptr;
	wxButton* btnMODUL = nullptr;
	wxButton* btnCLEAR = nullptr;
	wxButton* btnDOT = nullptr;
	wxButton* btnSame = nullptr;

	//TEXT BOX WHERE THE NUMBERS ARE GOING TO DISPLAY
	wxTextCtrl* SCREEN = nullptr;
	

};

