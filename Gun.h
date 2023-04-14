#pragma once
#include "Item.h"
#include <string>

class FGun : public FItem
{
public:
	FGun();
	virtual ~FGun();

protected:
	std::string Name;
};

