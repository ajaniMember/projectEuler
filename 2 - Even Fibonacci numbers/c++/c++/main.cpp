//Even Fibonacci numbers
//
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream>
#include <vector>
#define FOUR_MILLION 4000000

void fibonacci(std::vector<int>& evenFibonacci)
{
	int lastNum = 0, thisNum = 1, placeHolder;

	do
	{
		placeHolder = thisNum;
		thisNum += lastNum;
		lastNum = placeHolder;

		if ((thisNum % 2) == 0)
		{
			evenFibonacci.push_back(thisNum);
		}

	} while (thisNum < FOUR_MILLION);

}

int main()
{
	std::vector<int> evenFibonacci;
	int sum = 0;

	fibonacci(evenFibonacci);

	for (auto &e : evenFibonacci)
	{
		sum += e;
	}
	
	std::cout << sum << std::endl;
	std::system("PAUSE");
		
}