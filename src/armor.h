#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include <string>
using namespace std;
class Armor {
	protected:
		unsigned int strength;
		unsigned int weight;
	public:
		Armor();
		Armor(unsigned int, unsigned int);
		~Armor();
		virtual unsigned int get_armorStr();
		virtual unsigned int get_armorWgt();
		virtual void set_armorStr(unsigned int);
		virtual void set_armorWgt(unsigned int);
};
#endif

