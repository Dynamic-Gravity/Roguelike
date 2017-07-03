#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
using namespace std;
class Character {
	private:
		float health;	
	public:
		Character();
		Character(float);
		~Character();
		float get_health();
		void set_health(float, bool);
};
#endif
