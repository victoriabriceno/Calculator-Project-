#pragma once
#include<bitset>
#include"AddCommand.h"
#include"SubCommand.h"
#include"MultiCommand.h"
#include"DivCommand.h"
#include"ModCommand.h"
#include<vector>
class CalculatorProcessor
{

private:
	CalculatorProcessor();
	static CalculatorProcessor* _calculatorProcessor;

public:
	//Destructor
	~CalculatorProcessor() { delete[] _calculatorProcessor; }
	//Copy consructor
	CalculatorProcessor(CalculatorProcessor& copy) = delete;

	//Assigment operator
	void operator=(CalculatorProcessor& copy) = delete;

	static CalculatorProcessor* getInstance() {

		if (_calculatorProcessor == nullptr)

			_calculatorProcessor = new CalculatorProcessor();
		return _calculatorProcessor;
	}
	float Add(float number1, float number2) { return number1 + number2; }
	float Sub(float number1, float number2) { return number1 - number2; }
	float Multi(float number1, float number2) { return number1 * number2; }
	float Div(float number1, float number2) { return number1 / number2; }
	int Mod(int number1 , int number2) { return number1 % number2; }



	std::vector<IBaseCommand*> basecommnad;
	AddCommand* addCommand;
	SubCommand* subCommand;
	MultiCommand* multiCommand;
	DivCommand* divCommand;
	ModCommand* modCommand;
	
};
