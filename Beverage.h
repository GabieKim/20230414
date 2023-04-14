#pragma once
#include "Item.h"
#include <string>
class FBeverage : public FItem
{
public:
	FBeverage();
	virtual~FBeverage();

protected:
	std::string Name;
};

