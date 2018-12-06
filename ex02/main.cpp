#include "Move.class.h"

int main(void)
{	
	Move pointA(4.5 , 14.1);
	Move pointB(2.1, 5.3);
	Move pointC = pointA.add(pointB);
	pointA.showmove();
	pointB.showmove();
	pointC.showmove();
	return 0;
}
