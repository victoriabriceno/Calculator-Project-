#pragma once
#include "MainWindow.h"
class ButtonFactory
{
public:
	wxButton* ButtonCreation(wxWindow* window,int id,wxString string, wxPoint point, wxSize size,wxColour color);

	
};

