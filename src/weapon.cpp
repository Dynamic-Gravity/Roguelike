#include "weapon.h"
/*
 * Default constructus, sets all to 0.
 */
Weapon::Weapon(){
	set_range(0);
	set_damage(0);
}
/*
 * Constructor
 * r	unsigned int	value for weapon range
 * d	unsigned int	value for weapon damage
 */
Weapon::Weapon(unsigned int r, unsigned int d){
	set_range(r);
	set_damage(d);
}
/*
 * Deconstructor
 */
Weapon::~Weapon(){
	cout << "Weapon destructor invoked" << endl;
}
/*
 * returns wepaon range
 */
unsigned int Weapon::get_range(){
	return this->range;
}
/*
 * returns weapon damage
 */
unsigned int Weapon::get_damage(){
	return this->damage;
}
/*
 * sets weapon range
 * r	unsigned int	range value
 */
void Weapon::set_range(unsigned int r){
	this->range = r;
}
/*
 * sets weapon damage
 * d	unsigned int	damage value
 */
void Weapon::set_damage(unsigned int d){
	this->damage = d;
}
