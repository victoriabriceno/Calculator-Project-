#include "CalculatorProcessorTests.h"

void CalculatorProccessorTests::FourPlus4() {

	
	result = processor->basecommnad[0]->excute(4, 4);
	if (result == 8)
	{
		std::cout << "FourPlus4: " << "Pass\n";
	}
	else
	{
		std::cout << "FourPlus4: " << "Fail\n";
	}
}
void CalculatorProccessorTests::TenPlus5() {


	result = processor->basecommnad[0]->excute(10, 5);
	if (result == 15)
	{
		std::cout << "TenPlus5: " << "Pass\n";
	}
	else
	{
		std::cout << "TenPlus5: " << "Fail\n";
	}

}
void CalculatorProccessorTests::TwoMenus2() {

	result = processor->basecommnad[1]->excute(2, 2);
	if (result == 0)
	{
		std::cout << "TwoMenus2: " << "Pass\n";
	}
	else
	{
		std::cout << "TwoMenus2: " << "Fail\n";
	}

}
void CalculatorProccessorTests::FiveMenus3() {
	result = processor->basecommnad[1]->excute(5, 3);
	if (result == 2)
	{
		std::cout << "FiveMenus3: " << "Pass\n";
	}
	else
	{
		std::cout << "FiveMenus3: " << "Fail\n";
	}

}
void CalculatorProccessorTests::TwelvefdivedBy3() {

	result = processor->basecommnad[3]->excute(12, 3);
	if (result == 4)
	{
		std::cout << "TwelvefdivedBy3: " << "Pass\n";
	}
	else
	{
		std::cout << "TwelvefdivedBy3: " << "Fail\n";
	}


}
void CalculatorProccessorTests::FiveMultiplyBy2() {

	result = processor->basecommnad[2]->excute(5, 2);
	if (result == 10)
	{
		std::cout << "FiveMultiplyBy2: " << "Pass\n";
	}
	else
	{
		std::cout << "FiveMultiplyBy2: " << "Fail\n";
	}

}
void CalculatorProccessorTests::FourMod3() {

	result = processor->basecommnad[4]->excute(4, 3);
	if (result == 1)
	{
		std::cout << "FourMod3: " << "Pass\n";
	}
	else
	{
		std::cout << "FourMod3: " << "Fail\n";
	}


}
void CalculatorProccessorTests::TwoBinary() {
	number = 2;
	binary = processor->decimalToBinary(number);
	if (binary == "10")
	{
		std::cout << "TwoBinary: " << "Pass\n";
	}
	else
	{
		std::cout << "TwoBinary: " << "Fail\n";
	}
}
void CalculatorProccessorTests::ThreeBinary() {
	number = 3;
	binary = processor->decimalToBinary(number);
	if (binary == "11")
	{
		std::cout << "ThreeBinary: " << "Pass\n";
	}
	else
	{
		std::cout << "ThreeBinary: " << "Fail\n";
	}
}
void CalculatorProccessorTests::TenHex() {
	number = 10;
	hex = processor->decToHex(number);
	if (hex == "a")
	{
		std::cout << "TenHex: " << "Pass\n";
	}
	else
	{
		std::cout << "TenHex: " << "Fail\n";
	}
}
void CalculatorProccessorTests::ElevenHex() {
	number = 11;
	hex = processor->decToHex(number);
	if (hex == "b")
	{
		std::cout << "ElevenHex: " << "Pass\n";
	}
	else
	{
		std::cout << "ElevenHex: " << "Fail\n";
	}
}