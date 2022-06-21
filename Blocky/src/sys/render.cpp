#include "../../include/sys/render.h"

void out(char** board, int x, int y) // render array
{
	for (size_t h = 0; h < y; h++)
	{
		for (size_t w = 0; w < x; w++)
		{
			std::cout << board[h][w] << ' ';
		}
		std::cout << std::endl;
	}
}