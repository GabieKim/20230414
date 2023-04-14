#include <iostream>
#include "Sword.h"
#include "Gun.h"
#include "Club.h"
#include "Beverage.h"
#include "Bread.h"
#include "Character.h"
#include "Inventory.h"
#include "Item.h"
using namespace std;

int main()
{
	FInventory* Inventory = new FInventory;

	FSword* Sword = new FSword;
	FGun* Gun = new FGun;
	FClub* Club = new FClub;
	FBeverage* Beverage = new FBeverage;
	FBread* Bread = new FBread;
	
	Inventory->Put(Sword);
	Inventory->Put(Gun);
	Inventory->Put(Club);
	Inventory->Put(Beverage);
	Inventory->Put(Bread);

	delete Inventory;
	delete Sword;
	delete Gun;
	delete Club;
	delete Beverage;
	delete Bread;

	return 0;
}