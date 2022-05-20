#pragma once
#include "IBaseCommand.h"
class SubCommand :public IBaseCommand
{
	virtual float excute(float number1, float number2);
};

