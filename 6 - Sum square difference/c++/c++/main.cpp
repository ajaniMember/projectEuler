//find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <cmath>

int sumOfTheSquares(int x)
{
	int sum = 0;

	for (int i = 1; i <= x; i++)
	{
		sum += pow(i, 2);
	}

	return sum;
}

int squareOfTheSum(int x)
{
	int sum = 0;
	
	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}

	sum = pow(sum, 2);

	return sum;
}

int main()
{
	int maxNo = 100;

	std::cout << squareOfTheSum(maxNo) - sumOfTheSquares(maxNo)<< std::endl;
	int x;
	std::cin >> x;
	return 0;
}