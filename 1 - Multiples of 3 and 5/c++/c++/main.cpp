//Multiples of 3 and 5
//
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <vector>

//returns true if multiple is a multiple of base.
bool isMultipleOf(int base, int multiple)
{
	if ((multiple % base) == 0) return true;
	else return false;
}

int main()
{
	std::vector<int> multiples;
	int sumOfMultiples = 0;

	for (int count = 999; count != 1; count--)
	{
		if (isMultipleOf(3, count) || isMultipleOf(5, count))
		{
			multiples.push_back(count);
		}
	}
	
	for (auto &x : multiples)
	{
		sumOfMultiples += x;
	}

	std::cout << sumOfMultiples << std::endl;

	std::system("PAUSE");
	return 0;
}