#include "maze.h"
/*
 * Default structor, draws the maze.
 */
Maze::Maze(){
	drawMaze();
}
/*
 * Standard destructor
 */
Maze::~Maze(){
	cout << "Maze destructor invoked" << endl;
}
/*
 * returns the wall `character`, used as image for the maze walls.
 */
char Maze::get_wall(){
	return wall;
}
/*
 * returns the tile `character`, used as image for the maze tiles.
 */
char Maze::get_tile(){
	return tile;
}
/*
 * returns the x coordinate size
 */
int Maze::get_x(){
	return x;
}
/*
 * returns the y coordinate size
 */
int Maze::get_y(){
	return y;
}
/*
 *
 *
int* Maze::get_grid(){
	return &grid;
}
/*
 * Draws the maze.
 */
void Maze::drawMaze(){
	x = get_x();
	y = get_y();
	//
	for (int i = 0; i < y; ++i){
		cout << get_wall();
		for (int k = 0; k < x; ++k){
			cout << get_tile();
		}
		cout << get_wall();
		cout << endl;
	}
	cout << endl;
}
