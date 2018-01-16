#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE(7);

class mystack
{
	int array[MAX_ARRAY_SIZE];
	int size;
public:
	mystack() {size = 0;}
	void push(int num);
	void pop();
	void showStack();
};

void mystack::push(int num)
{
	if (size >= MAX_ARRAY_SIZE)
		cout << "ERROR: No more memory on the stack!\n";
	else
	{
		array[size] = num;
		size++;
	}
}

void mystack::pop()
{
	if(size <= 0)
		cout << "ERROR: No more stack to pop!\n";
	else
	{
		size--;
		cout << array[size] << endl;
	} 
}

void mystack::showStack()
{
	cout << "------\n";
	cout << "STACK OCCUPANCY: " << size << "/" << MAX_ARRAY_SIZE << "\n";
	cout << "STACK: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n------\n";
}

int main()
{
	mystack goodstack;
	char selection(0);
	int number(0);
	do
	{
		cout << "Type (p) to push a number to the stack.\nType (t) to pop the stack.\nType (s) to show the stack.\n (q) to quit.\n";
		cin >> selection;
		switch(selection)
		{
			case 'p':
				cout << "Enter a number.\n";
				cin >> number;
				goodstack.push(number);
				break;
			case 't':
				goodstack.pop();
				break;
			case 's':
				goodstack.showStack();
				break;
			case 'q':
				selection = 'q';
				break;
			default:
				cout << "Invalid choice. Try again.\n";
		}
	}while(selection != 'q');
	
	return 0;
}