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
	std::cout << Resource->GetName() << "�� �־����ϴ�" << std::endl;

	delete Resource;
}
