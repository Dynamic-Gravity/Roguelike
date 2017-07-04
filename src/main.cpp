#include <iostream>	//used for every C++ project under the sun
#include <fstream>	//used to read in files via cli args
#include <algorithm>	//used for string replace methods
#include "colormod.h" 	//used for terminal colors
#include "armor.h"	//used for armor objects
#include "character.h"	//used for color objects
#include "weapon.h"	//used for weapon objects

#define NEWLINE '\n';

int main (int argc, char* argv[] ){

	//Get contents of file
	string map, buffer;
	
	ifstream in(argv[1]); //read in map data from args
		
	if( in.fail() ){
		exit(1);
	} else {

		while ( in >> buffer ){
			map += buffer + NEWLINE;
		}
	}
	
	//colors to use
        Color::Modifier red(Color::FG_RED);
        Color::Modifier green(Color::FG_GREEN);
        Color::Modifier blue(Color::FG_BLUE);
        Color::Modifier def(Color::FG_DEFAULT);
	
	//color specific chars
	char tile 	= ' ';
	char wall 	= '#';
	char player 	= 'P';
	char exit 	= 'X';
	char troll	= 'T';
	
	
	/* Replacce text in the map string.
	 * 0 is a walkable tile.
	 * 1 is a wall.
	 * 2 is the starting spawn point.
	 * 3 is the end goal/objective.
	 * 4 are enemies (avoid unless you want to die!).
	 * Solution aquired from stack overflow.
	 * https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
	 */
	replace( map.begin(), map.end(), '0', tile );
	replace( map.begin(), map.end(), '1', wall );
	replace( map.begin(), map.end(), '2', player );
	replace( map.begin(), map.end(), '3', exit );
	replace( map.begin(), map.end(), '4', troll ); 
	
	cout << map;

	//Main game loop
	register int go = 1;
	while(go){
		//draw map
		//printMaze();
		
		//get player input
		unsigned int option = 0;
		cin >> option;
		
		switch(option){
			case 0 : break; 
			default : ;
		}
		//update options (like quit)
		//update player turn
		//update enemy turn
	}
	return 0;
}
