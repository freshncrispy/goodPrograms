#include <iostream>
using namespace std;



class linkedList
{
	struct node
	{
		int data;
		node *next;
	};
	node *head;
	int length;
public:
	linkedList() {head = NULL; length = 0;}
	void addNode(int var);
	void insertNode(int var, int location);
	void showAll();
};

void linkedList::addNode(int var)
{
	node *newNode, *nodePtr;

	newNode = new node;
	newNode->data = var;
	newNode->next = NULL;

	

	if(head == NULL)
	{
		head = newNode;
		length++;
	}
	else
	{
		nodePtr = head;

		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
		length++;
	}
}

void linkedList::showAll()
{
	if(head == NULL)
		cout << "No nodes in the list!\n";
	else
	{
		int count(0);
		node *tempPtr;
		tempPtr = head;
		while(tempPtr->next != NULL)
		{
			cout << "Node " << count+1 << ": " << tempPtr->data << endl;
			count++;
			tempPtr = tempPtr->next;
		}
		cout << "Node " << count+1 << ": " << tempPtr->data << endl;
	}
	cout << "Length of Linked List: " << length << endl;
}

void linkedList::insertNode(int var, int location)
{
	if (location <= 0 || location > length)		
		cout << "Desired location invalid.\n";
	else
	{
		location = location - 1;
		node *tempPtr, *newNode, *cpPtr;

		newNode = new node;
		newNode->data = var;

		tempPtr = head;
		if(location == 0)
		{
			newNode->next = head;
			head = newNode;
			length++;
		}
		else
		{
			for (int i = 1; i < location; i++)
			{
				tempPtr = tempPtr->next;
			}

			newNode->next = tempPtr->next;
			tempPtr->next = newNode;
			length++;
		}
	}
}


void clearScreen()
{
	for (int n = 0; n < 10; n++)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n";
	}
}

int main()
{
	linkedList table;
	int num(0), loc(0);
	char selection(0);
	do
	{
		cout << "Add a number(a), Insert a number(i), Show all numbers(s), Quit(q)\n";
		cin >> selection;
		switch(selection)
		{
			case 'a':
				cout << "Enter a number\n";
				cin >> num;
				table.addNode(num);
				break;
			case 's':
				table.showAll();
				break;
			case 'i':
				cout << "Enter a number\n";
				cin >> num;
				cout << "Now enter where you wish to insert the number.\n";
				cin >> loc;
				table.insertNode(num,loc);
				break;
			case 'q':
				selection = 'q';
				break;
		}
		cout << "\n\n\n";
		
	}while (selection != 'q');
	return 0;
}









/*
struct goodstuff
{
	int num;
	char word;
};

int main()
{
	goodstuff test, *testptr;

	testptr = &test;

	testptr->num = 1337;
	testptr->word = 'g';
	cout << testptr->num << endl;
	cout << testptr->word << endl;
	return 0;

}
*/
