#include "MainWindow.h"
#include"ButtonFactory.h"
wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)

//EVENTS BUTTONS
EVT_BUTTON(100, MainWindow::OnButtonClick)
EVT_BUTTON(101, MainWindow::OnButtonClick)
EVT_BUTTON(102, MainWindow::OnButtonClick)
EVT_BUTTON(103, MainWindow::OnButtonClick)
EVT_BUTTON(104, MainWindow::OnButtonClick)
EVT_BUTTON(105, MainWindow::OnButtonClick)
EVT_BUTTON(106, MainWindow::OnButtonClick)
EVT_BUTTON(107, MainWindow::OnButtonClick)
EVT_BUTTON(108, MainWindow::OnButtonClick)
EVT_BUTTON(109, MainWindow::OnButtonClick)
EVT_BUTTON(110, MainWindow::OnButtonClick)
EVT_BUTTON(111, MainWindow::OnButtonClick)
EVT_BUTTON(112, MainWindow::OnButtonClick)
EVT_BUTTON(113, MainWindow::OnButtonClick)
EVT_BUTTON(114, MainWindow::OnButtonClick)
EVT_BUTTON(115, MainWindow::OnButtonClick)
EVT_BUTTON(116, MainWindow::OnButtonClick)
EVT_BUTTON(117, MainWindow::OnButtonClick)
EVT_BUTTON(118, MainWindow::OnButtonClick)
EVT_BUTTON(119, MainWindow::OnButtonClick)
EVT_BUTTON(120, MainWindow::OnButtonClick)
EVT_BUTTON(121, MainWindow::OnButtonClick)
EVT_BUTTON(122, MainWindow::OnButtonClick)

wxEND_EVENT_TABLE()
MainWindow::MainWindow() :wxFrame(nullptr, wxID_ANY, "Briceno Calculator", wxPoint(30, 30), wxSize(420, 495), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {

	ButtonFactory btnFactory;
	//NOTES
	//wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX) this is for the frame stop been rezible.

	SetBackgroundColour(wxColour("#edf6f9"));

	//FONT FOR THE BUTTONS
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SetFont(font);

	//NUMBERS FROM 0-9 BUTTONS


	btn7 = btnFactory.ButtonCreation(this, 100, "7", wxPoint(5, 250), wxSize(100, 50),"#FBF8CC");
	btn8 = btnFactory.ButtonCreation(this, 101, "8", wxPoint(105, 250), wxSize(100, 50), "#FDE4CF");
	btn9 = btnFactory.ButtonCreation(this, 102, "9", wxPoint(205, 250), wxSize(100, 50), "#FFCFD2");
	btn4 = btnFactory.ButtonCreation(this, 103, "4", wxPoint(5, 300), wxSize(100, 50), "#A3C4F3");
	btn5 = btnFactory.ButtonCreation(this, 104, "5", wxPoint(105, 300), wxSize(100, 50), "#CFBAF0");
	btn6 = btnFactory.ButtonCreation(this, 105, "6", wxPoint(205, 300), wxSize(100, 50), "#F1C0E8");
	btn3 = btnFactory.ButtonCreation(this, 106, "3", wxPoint(205, 350), wxSize(100, 50), "#90DBF4");
	btn2 = btnFactory.ButtonCreation(this, 107, "2", wxPoint(105, 350), wxSize(100, 50), "#8EECF5");
	btn1 = btnFactory.ButtonCreation(this, 108, "1", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	btn0 = btnFactory.ButtonCreation(this, 109, "0", wxPoint(5, 400), wxSize(200, 50), "#B9FBC0");

	//CALCULATOR STUFF

	btnCLEAR = btnFactory.ButtonCreation(this, 110, "AC", wxPoint(5, 195), wxSize(50, 50), "#EAE4E9");
	btnSUM = btnFactory.ButtonCreation(this, 111, "+", wxPoint(60, 195), wxSize(50, 50), "#FFF1E6");
	btnSUB = btnFactory.ButtonCreation(this, 112, "-", wxPoint(115, 195), wxSize(50, 50), "#FDE2E4");
	btnMULTI = btnFactory.ButtonCreation(this, 113, "x", wxPoint(170, 195), wxSize(50, 50), "#FAD2E1");
	btnDIV = btnFactory.ButtonCreation(this, 114, "÷", wxPoint(225, 195), wxSize(50, 50), "#E2ECE9");
	btnNEGATIVE = btnFactory.ButtonCreation(this, 115, "+/-", wxPoint(280, 195), wxSize(50, 50), "#BEE1E6");
	btnMODUL = btnFactory.ButtonCreation(this, 116, "mod", wxPoint(335, 195), wxSize(65, 50), "#F0EFEB");
	btnBIN = btnFactory.ButtonCreation(this, 117, "BIN", wxPoint(310, 250), wxSize(90, 50), "#DFE7FD");
	btnHEX = btnFactory.ButtonCreation(this, 118, "HEX", wxPoint(310, 300), wxSize(90, 50), "#CDDAFD");
	btnDEC = btnFactory.ButtonCreation(this, 119, "DEC", wxPoint(310, 350), wxSize(90, 50), "#ffb5a7");
	btnEQUAL = btnFactory.ButtonCreation(this, 120, "=", wxPoint(310, 400), wxSize(90, 50), "#fcd5ce");
	btnDOT = btnFactory.ButtonCreation(this, 121, ".", wxPoint(205, 400), wxSize(100, 50), "#FFD6A5");


	//SCREEN
	SCREEN = new wxTextCtrl(this, wxID_ANY, wxString(""), wxPoint(5, 100), wxSize(395, 80), wxTE_READONLY | wxTE_RIGHT);

	//FONT FOR THE SCREEN

	wxFont screenFont(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SCREEN->SetFont(screenFont);

}
MainWindow::~MainWindow() {

}

void MainWindow::OnButtonClick(wxCommandEvent& event) {

	int id = event.GetId();
	if (id >= 100 && id <= 109) //NUMBERS
	{
		wxButton* btn = dynamic_cast<wxButton*> (event.GetEventObject());
		SCREEN->SetLabel(SCREEN->GetLabel() + btn->GetLabel());



	}
	else if (id >= 111 && id <= 114) //sum,sub,multi and div
	{
		decimalPoint = false;
		wxButton* btn = dynamic_cast<wxButton*> (event.GetEventObject());
		SCREEN->SetLabel(SCREEN->GetLabel() + btn->GetLabel());
	}
	else if (id == 121) //DOT
	{
		if (!decimalPoint)
		{
			SCREEN->SetLabel(SCREEN->GetLabel() + btnDOT->GetLabel());
			decimalPoint = true;
		}
	}
	else if (id == 110) //CLEAR
	{
		SCREEN->SetLabel("");
	}
	else if (id == 116) //MOD 
	{
		SCREEN->SetLabel(SCREEN->GetLabel() + btnMODUL->GetLabel());

	}
	else if (id == 115)
	{
		if (!negativeNumber)
		{
			SCREEN->SetLabel("-" + SCREEN->GetLabel());
			negativeNumber = true;
		}
		else
		{
			wxString erasing = SCREEN->GetLabel();
			erasing.erase(0, 1);
			SCREEN->SetLabel(erasing);
			negativeNumber = false;
		}
	}


	event.Skip();
}
