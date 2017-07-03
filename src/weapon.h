#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;
class Weapon {
	protected:
		unsigned int range;
		unsigned int damage;
	public:
		Weapon();
		Weapon(unsigned int, unsigned int);
		~Weapon();
		virtual unsigned int get_range();
		virtual unsigned int get_damage();
		virtual void set_range(unsigned int);
		virtual void set_damage(unsigned int);
};
#endif
