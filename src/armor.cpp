#include "armor.h"
/*
 * default constructor for armor, init all values to 0.
 */
Armor::Armor(){
	set_armorStr(0);
	set_armorWgt(0);
}
/*
 * Constructor for Armor
 * s	unsigned int	armor strength
 * w	unsigned int	armor weight
 */
Armor::Armor(unsigned int s, unsigned int w){
	set_armorStr(s);
	set_armorWgt(w);
}
/*
 * deconstructor
 */
Armor::~Armor(){
	cout << "Armor destructor invoked" << endl;
}
/*
 * returns armor strength
 */
unsigned int Armor::get_armorStr(){
	return this->strength;
}
/*
 * returns armor weight
 */
unsigned int Armor::get_armorWgt(){
	return this->weight;
}
/*
 * sets armor strength
 * s	unsigned int	armor strength
 */
void Armor::set_armorStr(unsigned int s){
	this->strength = s;
}
/*
 * sets armor weight
 * w	unsigned int	armor weight
 */
void Armor::set_armorWgt(unsigned int w){
	this->weight = w;
}
