#ifndef MAZE_H
#define MAZE_H
#include <iostream>
#include <string>
using namespace std;
class Maze {
	private:
		int x = 78;
                int y = 22;
		static const char wall = '#';
		static const char tile = ' ';
	public:
		Maze();
		~Maze();
		char get_wall();
		char get_tile();
		int get_x();
		int get_y();
		void drawMaze();
};
#endif

