// finding the smallest multiple from 1-20 that evenly divides.
//

#include "stdafx.h"
#include <iostream>

int range[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

//returns true if 1-20 evenly divides into num
bool checkNum(int num)
{
	
	//loop over every number in the range
	for (int i = 0; i <= 18; i++)
	{
		//return false if current index of range doesn't evenly divide into num
		if ((num % range[i]) > 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{

	for (int x = 20;; x += 10)
	{
		if (checkNum(x))
		{
			std::cout << x << std::endl;
			break;
		}
	}

	int x;
	std::cin >> x;

    return 0;
}

