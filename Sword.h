#pragma once
#include "Item.h"
#include <string>

class FSword: public FItem
{
public:
	FSword();
	virtual ~FSword();

protected:
	std::string Name;
};

