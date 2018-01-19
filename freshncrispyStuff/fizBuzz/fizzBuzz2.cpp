#include <iostream>
using std::cout;
using std::endl;
void fizzBuzz (int firstNum, int lastNum, int fizz, int buzz)
{
	if (firstNum > lastNum)
	{
		cout << "ERROR: FirstNum must be smaller than LastNum." << endl;
	}
	for (firstNum; firstNum <= lastNum; firstNum++)
	{
		if(firstNum % fizz == 0 && firstNum % buzz == 0)
			cout << "Fizz Buzz\n";
		else if (firstNum % fizz == 0)
			cout << "Fizz\n";
		else if (firstNum % buzz == 0)
			cout << "Buzz\n";
		else 
			cout << firstNum << endl;
	}
}

int main()
{
	fizzBuzz(1,100,3,5);
	return 0;
}
