#include "golf.h"
#include <iostream>

int main()
{
	golf antony;
	golf mike;
	
	setGolf(antony, "Antony", 4);
	showGolf(antony);
	handicap(antony, 10);
	showGolf(antony);
	while (setGolf(mike) != 1)
	{
		std::cout << "Name field is empty, please enter credentials again" << std::endl;
	}
	showGolf(mike);
	return 0;
}

