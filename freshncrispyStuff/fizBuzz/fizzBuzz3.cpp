// fizz buzz bang pop pow
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void insertSort(int array[5], int size);

class fbbpp
{
	int arrayNums[5], numOfNums, firstNum, lastNum;
public:
	void getNumList();
	void fizzBuzz();
};

void fbbpp::getNumList()
{
	cout << "Enter in range of numbers you wish to activivate fizzBuzz-ation.\nSepartate numbers with a space." << endl;
	cin >> firstNum >> lastNum;

	while(lastNum < firstNum)
	{
		cout << "ERROR: First number MUST be smaller than last number!" << endl;
		cin >> firstNum >> lastNum;
	}

	cout << "Enter in how many numbers you wish to set as 'FizzBuzzable'.\nChoose from 1-5." << endl;
	cin >> numOfNums;

	while(numOfNums > 5 || numOfNums < 1)
	{
		cout << "ERROR: NUMBER TOO BIG OR SMALL!" << endl;
		cout << "Enter in how many numbers you wish to set as 'FizzBuzzable'." << endl;
		cin >> numOfNums;
	}

	cout << "Enter in your numbers separated by spaces." << endl;

	for (int i = 0; i < numOfNums; i++ )
	{
		cin >> arrayNums[i];
	}
	
	cout << endl;
	insertSort(arrayNums, numOfNums);
}

void fbbpp::fizzBuzz()
{
	cout << "Fizz = " << arrayNums[0]
		<< "\nBuzz = " << arrayNums[1]
		<< "\nBang = " << arrayNums[2]
		<< "\nPop = " << arrayNums[3]
		<< "\nPow = " << arrayNums[4] << endl;
	bool fizzed(0);
	for (int i = firstNum; i <= lastNum; i++)
	{
		fizzed = 0;
		for(int j = 0; j < numOfNums; j++)
		{
			if(i % arrayNums[j] == 0 )
			{
				switch(j)
				{
					case 0:
						cout << "Fizz ";
						break;
					case 1:
						cout << "Buzz ";
						break;
					case 2:
						cout << "Bang ";
						break;
					case 3: 
						cout << "Pop ";
						break;
					case 4:
						cout << "Pow";
						break;
				}
				fizzed = 1;
			}
		}
		if (fizzed == 0)
			cout << i;
		cout << "\n";
	}
}

void insertSort(int array[5], int size)
{
	int temp(0), index(1), start(1);
	do
	{
		index = start;
		while (index >= 1 && array[index] < array[index - 1])
		{
			temp = array[index];
			array[index] = array[index - 1];
			array[index - 1] = temp; 
			index--;
		}
		start++;
	}while(start < size);
}

int main()
{
	fbbpp funtime;
	
	funtime.getNumList();
	funtime.fizzBuzz();
	
	
	return 0;
}
