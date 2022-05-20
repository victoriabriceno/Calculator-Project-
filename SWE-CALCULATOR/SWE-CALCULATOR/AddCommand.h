#pragma once
#include "IBaseCommand.h"
class AddCommand :public IBaseCommand
{
public:

	virtual float excute(float number1,float number2);
};

