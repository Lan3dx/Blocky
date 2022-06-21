#include "../include/sys/constants.h"
#include "../include/sys/includes.h"
#include "../include/sys/settings.h"

#include "../_boardLib/include/menu.h"

int main()
{
	bool status = true;

	std_config();
	board map(10, 5);

	while (status)
	{
		out(map.get(), map.cget()[0], map.cget()[1]);
		clear();
	}
	return 0;
}