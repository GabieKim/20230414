#pragma once
#include "Item.h"
#include <string>
class FClub : public FItem
{
public:
	FClub();
	virtual~FClub();

protected:
	std::string Name;
};

