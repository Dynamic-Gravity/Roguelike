#include "armor.h"

Armor::Armor(int s, int w){
	set_armorStr(s);
	set_armorWgt(w);
}

Armor::~Armor(){ delete this; }

int Armor::get_armorStr(){ return this->armor_str; }

int Armor::get_armorWgt(){ return this->armor_wgt; }

void Armor::set_armorStr(int s){ this->armor_str = s; }

void Armor::set_armorWgt(int w){ this->armor_wgt = w; }
