#include "../../include/sys/render.h"

template <typename type>
void part_out(std::vector<std::vector<type>> board) // render array
{
	for (size_t h = 0; h < board.size(); h++)
	{
		for (size_t w = 0; w < board[0].size(); w++)
		{
			std::cout << board[h][w] << ' ';
		}
		std::cout << std::endl;
	}
}