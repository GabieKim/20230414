#pragma once
#include "Sword.h"
#include "Gun.h"
#include "Club.h"
#include "Beverage.h"
#include "Bread.h"

class FInventory
{
public:
	FInventory();
	~FInventory();

	void Put(const class FItem* Resource);

protected:
	FSword Sword;
	FGun Gun;
	FClub Club;
	FBeverage Beverage;
	FBread Brea;
};

