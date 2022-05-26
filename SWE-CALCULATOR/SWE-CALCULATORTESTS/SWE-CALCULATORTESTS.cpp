// SWE-CALCULATORTESTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ButtonFactoryTests.h"
#include"CalculatorProcessorTests.h"

int main()
{
	//BUTTON FACTORY TEST
	ButtonFactoryTest* buttonFactoryTest = new ButtonFactoryTest();
	std::cout << "BUTTON FACTORY TEST\n";
	buttonFactoryTest->ButtonTestingId1();
	buttonFactoryTest->ButtonTestingId2();
	buttonFactoryTest->ButtonTestingId3();
	buttonFactoryTest->ButtonTestingId4();
	buttonFactoryTest->ButtonTestingId5();
	buttonFactoryTest->ButtonTestingLabel6();
	buttonFactoryTest->ButtonnTestingLabel7();
	buttonFactoryTest->ButtonTestingLabel8();
	buttonFactoryTest->ButtonTestingLabel9();
	buttonFactoryTest->ButtonTestingLabel10();

	std::cout << "\n";
	//CALCULATOR PROCESSOR TEST
	CalculatorProccessorTests* math = new CalculatorProccessorTests();
	std::cout << "CALCULATOR PROCCESSOR TEST\n";
	math->FourPlus4();
	math->TenPlus5();
	math->TwoMenus2();
	math->FiveMenus3();
	math->TwelvefdivedBy3();
	math->FiveMultiplyBy2();
	math->FourMod3();
	math->TwoBinary();
	math->ThreeBinary();
	math->TenHex();
	math->ElevenHex();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
