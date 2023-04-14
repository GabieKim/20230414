#pragma once
#include "Item.h"
#include "Inventory.h"

class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	void Use(const class FInventory* NewItem);	

protected:

};

