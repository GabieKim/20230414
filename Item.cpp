#include "Item.h"
#include<iostream>


FItem::FItem(std::string NewName)
	: Name(NewName)
{
	std::cout << Name << std::endl;
}

FItem::~FItem()
{
}
