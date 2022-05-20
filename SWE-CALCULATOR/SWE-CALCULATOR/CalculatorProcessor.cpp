#include "CalculatorProcessor.h"
#include <vector>


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


