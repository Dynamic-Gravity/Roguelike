#include <iostream>
#include "armor.h"
#include "character.h"
#include "maze.h"
#include "weapon.h"

int main (int argc, char* argv[] ){

	/*
	cout << "BEGINNING OBJECT TESTING..." << endl;
	cout << "Creating light armor..." << endl;
	Armor *lightArmor = new Armor(5,1);
	cout << "Creating heavy armor..." << endl;
	Armor *heavyArmor =  new Armor(10,2);
	cout << "Light armor strength: " << lightArmor->get_armorStr() << endl;
	cout << "Light armor weight: " << lightArmor->get_armorWgt() << endl;
	cout << "Heavy armor strength: " << heavyArmor->get_armorStr() << endl;
        cout << "Heavy armor weight: " << heavyArmor->get_armorWgt() << endl;

	cout << "Creating player character..." << endl;
	Character *player = new Character();
	cout << "Character health: " << player->get_health() << endl;
	
	cout << "Creating weapon sword..." << endl;
	Weapon *sword = new Weapon(2,50);
	cout << "Sword range: " << sword->get_range() << endl;
	cout << "Sword damage: " << sword->get_damage() << endl;

	cout << "Calling objects' deconstructor..." << endl;
	cout << "deleting light armor...";
	delete lightArmor;
	cout << "deleting heavy armor...";
	delete heavyArmor;
	cout << "deleting player...";
	delete player;
	cout << "deleting sword...";
	delete sword;
	
	cout << "TESTING COMPLETE" << endl;
	*/
	//Main game loop
	register int go = 1;
	while(go){
		//draw map
		Maze *map = new Maze();
		//get player input
		unsigned int option = 0;
		cin >> option;
		switch(option){
			case 0 : break; 
			default : cout << "printing grid..." << endl;
		}
		//update options (like quit)
		//update player turn
		//update enemy turn
	}
	return 0;
}
