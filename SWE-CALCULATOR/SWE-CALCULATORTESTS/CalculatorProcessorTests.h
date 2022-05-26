#pragma once
#include"../SWE-CALCULATOR/CalculatorProcessor.h"
#include<string>
class CalculatorProccessorTests {

public:
	CalculatorProcessor* processor = CalculatorProcessor::getInstance();
	float result;
	int number;
	std::string binary;
	std::string hex;
	void FourPlus4();
	void TenPlus5();
	void TwoMenus2();
	void FiveMenus3();
	void TwelvefdivedBy3();
	void FiveMultiplyBy2();
	void FourMod3();
	void TwoBinary();
	void ThreeBinary();
	void TenHex();
	void ElevenHex();

};