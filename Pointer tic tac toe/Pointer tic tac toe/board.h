#pragma once
#include <iostream>
class Board
{
	char *mPlaySpace;       //Point to a character array that represents the playSpace for tic tac toe
	int numRows; // number of rows
	int numCols; // number of columns
	int mBoardSize;  // number od spaces on the board
	
public:
	Board()
	{
		mPlaySpace = new char[9];
		numCols = 3;
		numRows = 3;
		mBoardSize = 9;
		ClearBoard();
	}

	Board(int rows, int cols)
	{
		mPlaySpace = new char[rows * cols];
		numCols = cols;
		numRows = rows;
		mBoardSize = rows * cols;
		ClearBoard();
	}

	~Board()
	{
		delete[] mPlaySpace;
	}
	//set empty spaces for the board
	void ClearBoard()
	{
		for (int i = 0; i < mBoardSize; i++)
		{
			mPlaySpace[i] = 'X';
		}
	}

	void Board::DisplayBoard()
	{
		for (int i = 0; i < mBoardSize; i++)
		{
			std::cout << mPlaySpace[i];
			if (i % numCols == numCols - 1)
				std::cout << std::endl;
		}
	}
};

