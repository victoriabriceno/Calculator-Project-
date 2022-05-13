#include "ButtonFactory.h"
#include "MainWindow.h"


wxButton* ButtonFactory::ButtonCreation(wxWindow* window,wxWindowID id, wxString string, wxPoint point, wxSize size,wxColour color) {


	wxButton* button = new wxButton(window, id, string, point, size);
	button->SetBackgroundColour(color);
	return button;

}



