#include <iostream>
using namespace std;

const int ARRAY_SIZE(10);

class mystack
{
	int array[ARRAY_SIZE];
	int *ptr, size;
public:
	mystack() {ptr = array[0]; size = 0;}
	void push(int num);
	void pop();
	void showStack();
};

void mystack::push(int num)
{
	if (size >= ARRAY_SIZE - 1)
		cout << "No more memory on the stack!\n";
	else
	{
		*ptr[size] = num;
		size++;
	}
}

void mystack::pop();
{
	
	 
}

int main()
{
	cout << ARRAY_SIZE << endl;
	return 0;
}