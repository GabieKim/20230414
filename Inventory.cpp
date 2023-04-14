#include "Inventory.h"
#include <iostream>

FInventory::FInventory()
{
}

FInventory::~FInventory()
{
}

void FInventory::Put(const FItem* Resource)
{
	std::cout << Resource->GetName() << "을 넣었습니다" << std::endl;

	delete Resource;
}
