#include"ButtonFactoryTests.h"


void ButtonFactoryTest::ButtonTestingId1() {

	window = new wxWindow();
	buttonsTesting =  buttonCreation.ButtonCreation(window, 100, "1", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetId() == 100)
	{
		std::cout << "ButtonTestingId1: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingId1: " << "Fail\n";
	}
}
void ButtonFactoryTest::ButtonTestingId2() {

	window = new wxWindow();
	buttonsTesting = buttonCreation.ButtonCreation(window, 101, "2", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetId() == 101)
	{
		std::cout << "ButtonTestingId2: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingId2: " << "Fail\n";
	}

}
void ButtonFactoryTest::ButtonTestingId3() {
	window = new wxWindow();
	buttonsTesting = buttonCreation.ButtonCreation(window, 102, "3", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetId() == 102)
	{
		std::cout << "ButtonTestingId3: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingId3: " << "Fail\n";
	}

}
void ButtonFactoryTest::ButtonTestingId4(){

	window = new wxWindow();
	buttonsTesting = buttonCreation.ButtonCreation(window, 103, "4", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetId() == 103)
	{
		std::cout << "ButtonTestingId4: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingId4: " << "Fail\n";
	}

}
void ButtonFactoryTest::ButtonTestingId5(){
	window = new wxWindow();
	buttonsTesting = buttonCreation.ButtonCreation(window, 104, "5", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetId() == 104)
	{
		std::cout << "ButtonTestingId5: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingId5: " << "Fail\n";
	}
}
void ButtonFactoryTest::ButtonTestingLabel6(){
	window = new wxWindow();
	wxString  string = "6";
	buttonsTesting = buttonCreation.ButtonCreation(window, 105, "6", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetLabel().CompareTo(string))
	{
		std::cout << "ButtonTestingLabel6: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingLabel6: " << "Fail\n";
	}
}
void ButtonFactoryTest::ButtonnTestingLabel7(){
	window = new wxWindow();
	wxString string1 = "7";
	buttonsTesting = buttonCreation.ButtonCreation(window, 106, "7", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetLabel().CompareTo(string1))
	{
		std::cout << "ButtonTestingLabel7: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingLabel7: " << "Fail\n";
	}


}
void ButtonFactoryTest::ButtonTestingLabel8(){

	window = new wxWindow();
	wxString string2 = "8";
	buttonsTesting = buttonCreation.ButtonCreation(window, 107, "8", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetLabel().CompareTo(string2))
	{
		std::cout << "ButtonTestingLabel8: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingLabel8: " << "Fail\n";
	}
}
void ButtonFactoryTest::ButtonTestingLabel9(){

	window = new wxWindow();
	wxString string3 = "9";
	buttonsTesting = buttonCreation.ButtonCreation(window, 108, "9", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetLabel().CompareTo(string3))
	{
		std::cout << "ButtonTestingLabel9: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingLabel9: " << "Fail\n";
	}

}
void ButtonFactoryTest::ButtonTestingLabel10(){

	window = new wxWindow();
	wxString string4 = "10";
	buttonsTesting = buttonCreation.ButtonCreation(window, 109, "10", wxPoint(5, 350), wxSize(100, 50), "#98F5E1");
	if (buttonsTesting->GetLabel().CompareTo(string4))
	{
		std::cout << "ButtonTestingLabel10: " << "Pass\n";
	}
	else
	{
		std::cout << "ButtonTestingLabel10: " << "Fail\n";
	}
}
