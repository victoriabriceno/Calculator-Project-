#include "MainWindow.h"
#include"ButtonFactory.h"
#include"CalculatorProcessor.h"
#include"bitset"
#include <sstream>
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

int operators, numberBIN;
float result, number1, number2;

MainWindow::MainWindow() :wxFrame(nullptr, wxID_ANY, "Briceno Calculator", wxPoint(30, 30), wxSize(420, 495), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {


	//CalculatorProcessor* calProcessor = CalculatorProcessor::getInstance();

	ButtonFactory btnFactory;
	//NOTES
	//wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX) this is for the frame stop been rezible.

	SetBackgroundColour(wxColour("#edf6f9"));

	//FONT FOR THE BUTTONS
	wxFont font(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SetFont(font);

	//NUMBERS FROM 0-9 BUTTONS


	btn7 = btnFactory.ButtonCreation(this, 100, "7", wxPoint(5, 250), wxSize(100, 50), "#FBF8CC");
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

	btnSUM = btnFactory.ButtonCreation(this, 110, "+", wxPoint(60, 195), wxSize(50, 50), "#FFF1E6");
	btnSUB = btnFactory.ButtonCreation(this, 111, "-", wxPoint(115, 195), wxSize(50, 50), "#FDE2E4");
	btnMULTI = btnFactory.ButtonCreation(this, 112, "x", wxPoint(170, 195), wxSize(50, 50), "#FAD2E1");
	btnDIV = btnFactory.ButtonCreation(this, 113, "÷", wxPoint(225, 195), wxSize(50, 50), "#E2ECE9");
	btnMODUL = btnFactory.ButtonCreation(this, 114, "mod", wxPoint(335, 195), wxSize(65, 50), "#F0EFEB");
	btnBIN = btnFactory.ButtonCreation(this, 115, "BIN", wxPoint(310, 250), wxSize(90, 50), "#DFE7FD");
	btnHEX = btnFactory.ButtonCreation(this, 116, "HEX", wxPoint(310, 300), wxSize(90, 50), "#CDDAFD");
	btnDEC = btnFactory.ButtonCreation(this, 117, "DEC", wxPoint(310, 350), wxSize(90, 50), "#ffb5a7");
	btnEQUAL = btnFactory.ButtonCreation(this, 118, "=", wxPoint(310, 400), wxSize(90, 50), "#fcd5ce");
	btnDOT = btnFactory.ButtonCreation(this, 119, ".", wxPoint(205, 400), wxSize(100, 50), "#FFD6A5");
	btnNEGATIVE = btnFactory.ButtonCreation(this, 120, "+/-", wxPoint(280, 195), wxSize(50, 50), "#BEE1E6");
	btnCLEAR = btnFactory.ButtonCreation(this, 121, "AC", wxPoint(5, 195), wxSize(50, 50), "#EAE4E9");


	//SCREEN
	SCREEN = new wxTextCtrl(this, wxID_ANY, wxString(""), wxPoint(5, 100), wxSize(395, 80), wxTE_READONLY | wxTE_RIGHT);

	//FONT FOR THE SCREEN

	wxFont screenFont(40, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_LIGHT, false, wxT("CENTURY GOTHIC"));
	SCREEN->SetFont(screenFont);

}
MainWindow::~MainWindow() {

}



void MainWindow::OnButtonClick(wxCommandEvent& event) {

	CalculatorProcessor* calProcessor = CalculatorProcessor::getInstance();

	int id = event.GetId();
	if (id >= 100 && id <= 109) //NUMBERS
	{
		wxButton* btn = dynamic_cast<wxButton*> (event.GetEventObject());
		SCREEN->SetLabel(SCREEN->GetLabel() + btn->GetLabel());
	}
	else if (id >= 110 && id <= 117) {

		//FOR THE MATH 
		switch (id)
		{
		case 110: {

			decimalPoint = false;
			operators = 1;
			SCREEN->SetLabel(SCREEN->GetLabel() + btnSUM->GetLabel());
			wxString events = SCREEN->GetLabel();
			number1 = wxAtof(events);
			SCREEN->SetLabel(btnSUM->GetLabel());
			break;

		}
		case 111: {
			decimalPoint = false;
			operators = 2;
			SCREEN->SetLabel(SCREEN->GetLabel() + btnSUB->GetLabel());
			wxString eventSUB = SCREEN->GetLabel();
			number1 = wxAtof(eventSUB);
			SCREEN->SetLabel(btnSUB->GetLabel());
			break;
		}
		case 112: {
			decimalPoint = false;
			operators = 3;
			SCREEN->SetLabel(SCREEN->GetLabel() + btnMULTI->GetLabel());
			wxString eventMULTI = SCREEN->GetLabel();
			number1 = wxAtof(eventMULTI);
			SCREEN->SetLabel(btnMULTI->GetLabel());
			break;
		}
		case 113: {
			decimalPoint = false;
			operators = 4;
			SCREEN->SetLabel(SCREEN->GetLabel() + btnDIV->GetLabel());
			wxString eventDIV = SCREEN->GetLabel();
			number1 = wxAtof(eventDIV);
			SCREEN->SetLabel(btnDIV->GetLabel());
			break;
		}
		case 114: {
			decimalPoint = false;
			operators = 5;
			SCREEN->SetLabel(SCREEN->GetLabel() + btnMODUL->GetLabel());
			wxString eventMODUL = SCREEN->GetLabel();
			number1 = wxAtof(eventMODUL);
			SCREEN->SetLabel(btnMODUL->GetLabel() + " ");
			break;

		}
		case 115: {

			result = wxAtof(SCREEN->GetLabel());
			std::string string;
			string = calProcessor->decimalToBinary(result);
			SCREEN->SetLabel(string);


			break;

		}
		case 116: {
			decimalPoint = false;
			result = wxAtof(SCREEN->GetLabel());
			std::string result1 = calProcessor->decToHex(result);
			SCREEN->SetLabel(result1);
			break;
		}

		case 117: {
			decimalPoint = false;
			result = wxAtof(SCREEN->GetLabel());
			std::string result1 = calProcessor->decimal(result);
			SCREEN->SetLabel(SCREEN->GetLabel());
			break;

		}
		}

	}
	if (id == 118)
	{
		//FOR THE RESULT WHEN THE USER PRESS =	
		switch (operators)
		{
		case 1: {

			wxString eventsSUM = SCREEN->GetLabel();
			eventsSUM.erase(0, 1);
			number2 = wxAtof(eventsSUM);
			result = calProcessor->basecommnad[0]->excute(number1, number2);
			eventsSUM = wxString::Format(wxT("%g"), result);
			SCREEN->SetLabel(eventsSUM);
			break;

		}
		case 2: {

			wxString eventSUB = SCREEN->GetLabel();
			eventSUB.erase(0, 1);
			number2 = wxAtof(eventSUB);
			result = calProcessor->basecommnad[1]->excute(number1, number2);
			eventSUB = wxString::Format(wxT("%g"), result);
			SCREEN->SetLabel(eventSUB);

			break;
		}
		case 3: {
			wxString eventMULTI = SCREEN->GetLabel();
			eventMULTI.erase(0, 1);
			number2 = wxAtof(eventMULTI);
			result = calProcessor->basecommnad[2]->excute(number1, number2);
			eventMULTI = wxString::Format(wxT("%g"), result);
			SCREEN->SetLabel(eventMULTI);
			break;

		}
		case 4: {
			wxString eventDIV = SCREEN->GetLabel();
			eventDIV.erase(0, 1);
			number2 = wxAtof(eventDIV);
			result = calProcessor->basecommnad[3]->excute(number1, number2);
			eventDIV = wxString::Format(wxT("%g"), result);
			SCREEN->SetLabel(eventDIV);
			break;
		}
		case 5: {

			wxString eventMODUL = SCREEN->GetLabel();
			eventMODUL.erase(0, 3); // We delete "mod" the letter because then we have an error.
			number2 = wxAtof(eventMODUL);
			result = calProcessor->basecommnad[4]->excute(number1, number2);
			eventMODUL = wxString::Format(wxT("%g"), result);
			SCREEN->SetLabel(eventMODUL);
			break;
		}


		}

	}
	else if (id == 121) //CLEAR
	{
		SCREEN->SetLabel("");
	}
	else if (id == 119) //DOT
	{
		if (!decimalPoint)
		{
			SCREEN->SetLabel(SCREEN->GetLabel() + btnDOT->GetLabel());
			decimalPoint = true;
		}
	}
	else if (id == 120)
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