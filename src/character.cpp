#include "character.h"
/*
 * Default constructor
 */
Character::Character(){
	set_health(100.0, true);
}
/*
 * Consructor for Character.
 * h 	float	the health to be assigned.
 */
Character::Character(float h){
	set_health(h, true);
}
/*
 * Deconstructor
 */
Character::~Character(){
	cout << "Character destructor invoked" << endl;
}
/*
 * returns current health value.
 */
float Character::get_health(){
	return this->health;
}
/*
 * h 	float	The amount used to heal or damage.
 * o 	bool	T/F: true is heal, false is damage.
 */
void Character::set_health(float h, bool o){
	o ? this->health += h : this->health -= h;
}
