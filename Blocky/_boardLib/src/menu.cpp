#include "../include/menu.h"

board::board(int l_sizeX, int l_sizeY)
{
	char** l_array = new char* [l_sizeY];
	for (int i = 0; i < l_sizeY; i++)
		l_array[i] = new char[l_sizeX];

	board::map = l_array;
	board::X = l_sizeX;
	board::Y = l_sizeY;

	delete[] l_array;
}
board::~board()
{
	delete[] board::map;
}

int* board::cget()
{
	static int cords[2]{};
	cords[0] = board::X;
	cords[1] = board::Y;
	return cords;
}
char** board::get()
{
	return board::map;
}
void board::set(char** l_array)
{
	for (size_t i = 0; i < board::Y; i++)
	{
		for (size_t j = 0; j < board::X; j++)
		{
			try
			{
				board::map[i][j] = l_array[i][j];
			}
			catch (...)
			{
				break;
			}
		}
	}
}
void board::line(int* p1, int* p2)
{

}