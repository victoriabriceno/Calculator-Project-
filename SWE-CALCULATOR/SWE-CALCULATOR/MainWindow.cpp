#include "MainWindow.h"
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

	//NOTES
	//wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX) this is for the frame stop been rezible.

	SetBackgroundColour(wxColour("#edf6f9"));

	//FONT FOR THE BUTTONS
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SetFont(font);

	//NUMBERS FROM 0-9 BUTTONS

	btn7 = new wxButton(this, 100, "7", wxPoint(5, 250), wxSize(100, 50));
	btn8 = new wxButton(this, 101, "8", wxPoint(105, 250), wxSize(100, 50));
	btn9 = new wxButton(this, 102, "9", wxPoint(205, 250), wxSize(100, 50));
	btn4 = new wxButton(this, 103, "4", wxPoint(5, 300), wxSize(100, 50));
	btn5 = new wxButton(this, 104, "5", wxPoint(105, 300), wxSize(100, 50));
	btn6 = new wxButton(this, 105, "6", wxPoint(205, 300), wxSize(100, 50));
	btn3 = new wxButton(this, 106, "3", wxPoint(205, 350), wxSize(100, 50));
	btn2 = new wxButton(this, 107, "2", wxPoint(105, 350), wxSize(100, 50));
	btn1 = new wxButton(this, 108, "1", wxPoint(5, 350), wxSize(100, 50));
	btn0 = new wxButton(this, 109, "0", wxPoint(5, 400), wxSize(200, 50));

	//CALCULATOR STUFF

	btnCLEAR = new wxButton(this, 110, "AC", wxPoint(5, 195), wxSize(50, 50));
	btnSUM = new wxButton(this, 111, "+", wxPoint(60, 195), wxSize(50, 50));
	btnSUB = new wxButton(this, 112, "-", wxPoint(115, 195), wxSize(50, 50));
	btnMULTI = new wxButton(this, 113, "x", wxPoint(170, 195), wxSize(50, 50));
	btnDIV = new wxButton(this, 114, "÷", wxPoint(225, 195), wxSize(50, 50));
	btnNEGATIVE = new wxButton(this, 115, "+/-", wxPoint(280, 195), wxSize(50, 50));
	btnMODUL = new wxButton(this, 116, "mod", wxPoint(335, 195), wxSize(65, 50));
	btnBIN = new wxButton(this, 117, "BIN", wxPoint(310, 250), wxSize(90, 50));
	btnHEX = new wxButton(this, 118, "HEX", wxPoint(310, 300), wxSize(90, 50));
	btnDEC = new wxButton(this, 119, "DEC", wxPoint(310, 350), wxSize(90, 50));
	btnEQUAL = new wxButton(this, 120, "=", wxPoint(310, 400), wxSize(90, 50));
	btnDOT = new wxButton(this, 121, ".", wxPoint(205, 400), wxSize(100, 50));

	//SCREEN
	SCREEN = new wxTextCtrl(this, wxID_ANY, wxString(""), wxPoint(5, 100), wxSize(395, 80), wxTE_READONLY | wxTE_RIGHT);

	//FONT FOR THE SCREEN

	wxFont screenFont(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SCREEN->SetFont(screenFont);

	//COLORS FOR THE BUTTONS 

	btn7->SetBackgroundColour(wxColour("#FBF8CC"));
	btn8->SetBackgroundColour(wxColour("#FDE4CF"));
	btn9->SetBackgroundColour(wxColour("#FFCFD2"));
	btn6->SetBackgroundColour(wxColour("#F1C0E8"));
	btn5->SetBackgroundColour(wxColour("#CFBAF0"));
	btn4->SetBackgroundColour(wxColour("#A3C4F3"));
	btn3->SetBackgroundColour(wxColour("#90DBF4"));
	btn2->SetBackgroundColour(wxColour("#8EECF5"));
	btn1->SetBackgroundColour(wxColour("#98F5E1"));
	btn0->SetBackgroundColour(wxColour("#B9FBC0"));
	btnDOT->SetBackgroundColour(wxColour("#FFD6A5"));
	btnCLEAR->SetBackgroundColour(wxColour("#EAE4E9"));
	btnSUM->SetBackgroundColour(wxColour("#FFF1E6"));
	btnSUB->SetBackgroundColour(wxColour("#FDE2E4"));
	btnMULTI->SetBackgroundColour(wxColour("#FAD2E1"));
	btnDIV->SetBackgroundColour(wxColour("#E2ECE9"));
	btnNEGATIVE->SetBackgroundColour(wxColour("#BEE1E6"));
	btnMODUL->SetBackgroundColour(wxColour("#F0EFEB"));
	btnBIN->SetBackgroundColour(wxColour("#DFE7FD"));
	btnHEX->SetBackgroundColour(wxColour("#CDDAFD"));
	btnDEC->SetBackgroundColour(wxColour("#ffb5a7"));
	btnEQUAL->SetBackgroundColour(wxColour("#fcd5ce"));


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
	else if (id == 116 ) //MOD 
	{
		SCREEN->SetLabel(SCREEN->GetLabel()+ btnMODUL->GetLabel());

	}
	else if (id==115)
	{
		if (!negativeNumber)
		{
			SCREEN->SetLabel("-"+SCREEN->GetLabel());
			negativeNumber = true;
		}
		else
		{
			wxString erasing = SCREEN->GetLabel();
			erasing.erase(0,1);
			SCREEN->SetLabel(erasing);
			negativeNumber = false;
		}
	}


	event.Skip();
}
