#pragma once
#include<string>

class FItem
{
public:
	FItem(std::string NewName);
	virtual~FItem();

	std::string GetName()const { return Name; }

protected:
	std::string Name;
};

