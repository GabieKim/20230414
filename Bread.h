#pragma once
#include "Item.h"
#include <string>
class FBread : public FItem
{
public:
	FBread();
	virtual ~FBread();
protected:
	std::string Name;
};

