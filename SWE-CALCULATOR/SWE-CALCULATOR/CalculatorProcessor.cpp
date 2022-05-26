#include "CalculatorProcessor.h"
#include <vector>
#include <string>
#include "bitset"
#include <iostream>
#include <sstream>

CalculatorProcessor::CalculatorProcessor() {

	addCommand = new AddCommand;
	subCommand = new SubCommand;
	multiCommand = new MultiCommand;
	divCommand = new DivCommand;
	modCommand = new ModCommand;

	basecommnad.push_back(addCommand);
	basecommnad.push_back(subCommand);
	basecommnad.push_back(multiCommand);
	basecommnad.push_back(divCommand);
	basecommnad.push_back(modCommand);
}

CalculatorProcessor* ::CalculatorProcessor::_calculatorProcessor = nullptr;

std::string CalculatorProcessor::decimalToBinary(int n) {

	
	//converting it to string.
	std::string binary = std::bitset<64>(n).to_string();

	//Finding the first occurrence of "1"
	//to strip off all the zeroes it has in the beggining.
	const auto location1 = binary.find('1');

	if (location1 != std::string::npos)
		return binary.substr(location1);

	return "0";
}
std::string CalculatorProcessor::decToHex(int n) {

	std::ostringstream ss;
	ss << std::hex << n;
	std::string result1 = ss.str();

	return result1;

}
std::string CalculatorProcessor:: decimal(int n) {

	std::ostringstream ss;
	ss << std::dec << n;
	std::string result1 = ss.str();

	return result1;


}
