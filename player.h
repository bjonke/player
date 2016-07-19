#include "weapon.h"
#include "armour.h"

#ifndef _PLAYER_H_
#define _PLAYER_H_

// A Player object
struct Player
{
	string name;
	string type;
	
	Weapon* weapon;
	Armour* armour;

	int health;
};

// Function returning a pointer to a player object
Player* CreatePlayer( string name, string type, Weapon *w, Armour *a );

// Printing information about object CreateArmour have pointed out
void ShowPlayerInfo(Player* a);

// Equiping a player object with armour and weapon
void EquipPlayerWeapon( Player *p, Weapon *w ); // equips player 'p' with weapon 'w'
void EquipPlayerArmour( Player *p, Armour *a ); // equips player 'p' with armour 'a'

// Deallocates all memory that Armour have used to create the armour
void DestroyPlayer(Player* p);

#endif
