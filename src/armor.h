#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include <string>
using namespace std;
class Armor {
	private:
		int armor_str;
		int armor_wgt;
	public:
		Armor(int,int);
		~Armor();
		virtual int get_armorStr();
		virtual int get_armorWgt();
		virtual void set_armorStr(int);
		virtual void set_armorWgt(int);
};
#endif

