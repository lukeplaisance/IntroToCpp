#include "Player.h"
#include "Point2D.h"
#include "Dungeon.h"

void Dungeon::GenRooms()
{

}

Dungeon::Dungeon()
{
	Point2D dungeon[5][5];
	Point2D mRooms = dungeon[5][5];
}

Dungeon::Dungeon(Player * player, int rows, int cols)
{
	mPlayer = player;
	mNumCols = cols;
	mNumRows = rows;
}

bool Dungeon::CheckPlayerPosition()
{
	return false;
}

void Dungeon::PrintRooms()
{
}
