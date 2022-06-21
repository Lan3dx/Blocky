#pragma once

#include <stdlib.h>

class board 
{
	private:
		char** map;
		int X;
		int Y;

	public:
		board(int, int);
		~board();

		void set(char**);
		void line(int*, int*);

		char** get();
		int* cget();
};