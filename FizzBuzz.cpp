//C++ solution to the FizzBuzz problem
//Problem: Prints each number from 1 to 100 on every line
//for each multiple of 3, prints "Fizz"
//for each multiple of 5, prints "Buzz"
//for each multiple of both 3 and 5, prints "FizzBuzz"

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
}
