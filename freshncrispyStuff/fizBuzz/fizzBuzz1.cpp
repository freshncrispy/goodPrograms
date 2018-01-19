#include <iostream>
using std::cout;
using std::endl;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			cout << "fizz buzz\n";
		else if (i % 3 == 0)
			cout << "fizz\n";
		else if(i % 5 == 0)
			cout << "buzz\n";
		else
			cout << i << endl;
	}
	cout << endl;

	return 0;
}
