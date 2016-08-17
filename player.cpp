#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

#include "player.h"

// Creates a new player and initiates it
Player* CreatePlayer( string name, string type, Weapon *w, Armour *a )
{
	// Constants used to create a name for the player
	const string adjective[4] = {"Seasoned ", "Green ", "Veteran ", "Heroic "};
	const string subtitle[4] = {" of fire", " of wind", " of water", " of earth"};

	// Creates a pointer to a player struct using new
	Player* new_player = new Player;

	// Defines name and class for player
	new_player->name.append(adjective[rand() % 4]);
	new_player->name.append(type);
	new_player->name.append(subtitle[rand() % 4]);

	// Setting helath to 0-100 och assigns player a weapon and a armour
	new_player->health = rand() % 25;
	new_player->armour = a;
	new_player->weapon = w;

	return new_player;
}

// Printing player information on screen
void ShowPlayerInfo(Player* p)
{
	cout << "---------------------------------------" << endl;
	cout << "Player name: " << p->name << endl;
	cout << "HP: " << p->health << endl;
	cout << "equippped armour: " << p->armour->name << endl;
	cout << "equipped weapon: " << p->weapon->name << endl;
}

// Equips player with a weapon
void EquipPlayerWeapon( Player *p, Weapon *w )
{
	cout << p->name << " equips " << w->name << endl;
	p->weapon = w;
}

// Equips player with a armour
void EquipPlayerArmour( Player *p, Armour *a )
{
	cout << p->name << " equips " << a->name << endl;
	p->armour = a;
}

// Deallocated all memory that the player used
void DestroyPlayer( Player *p )
{
	delete p;
}
