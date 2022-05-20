#pragma once
#include "IBaseCommand.h"
class MultiCommand :public IBaseCommand
{
    virtual float excute(float number1, float number2);
};

