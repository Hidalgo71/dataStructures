#include <iostream>
#include "singleLL.h"
#include"doublyLL.h"

using namespace std;

int main()
{
	int item;

	//cout << "working";

	singlyLinkedList<char> listCSLL;
	singlyLinkedList<int> listNSLL;

	cout << "Create Number Single Linked List: "
		<< "\nCTRL+Z for exit!" << endl;
	cin >> item;

	while (!cin.eof())
	{
		listNSLL.insertFirst(item);
		cin >> item;
	}

	listCSLL.insertPosition('y', 3);
	listNSLL.printSLL();
	//listTest.printSLL();
	system("PAUSE");
	return 0;
}

