#pragma once
#include <string>


class FItem
{
public:
	FItem();
	virtual~FItem();

	std::string GetName() { return Name; }

protected:
	std::string Name;
};

