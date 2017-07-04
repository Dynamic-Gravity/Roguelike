# Roguelike
A rogue-like CLI game written in C++.

## How it Works
The game grid is 21 x 10. This is because the algorithm reads data from `maze.txt`. If one is willing, they can make their own maze and supplant it with their own `maze.txt` and pass it is as an argument.

The structure of the game grid is as follows:
	- 0 is a walkable tile.
	- 1 is a wall.
	- 2 is the starting spawn point.
	- 3 is the end goal/objective.
	- 4 are enemies (avoid unless you want to die!).

### Installation
```shell
make
```
### Execution
```shell
make run
#or
./Game.out
```
