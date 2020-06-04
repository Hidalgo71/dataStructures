#include <iostream>
#include "singleLL.h"
#include"doublyLL.h"

using namespace std;

int main()
{
	int item;
	char itemC;


	singlyLinkedList<char> listCSLL;
	singlyLinkedList<int> listNSLL;

	/*cout << "Create Number Single Linked List: "
		<< "\nCTRL+Z for exit!" << endl;
	cin >> item;

	while (!cin.eof())
	{
		listNSLL.insertLast(item);
		cin >> item;
	}
	listNSLL.printSLL();
	cout << endl;*/

	cout << "Create Char Single Linked List: "
		<< "\nCTRL+Z for exit!" << endl;
	cin >> itemC;

	while (!cin.eof())
	{
		listCSLL.insertLast(itemC);
		cin >> itemC;
	}
	listCSLL.printSLL();
	cout << endl;
	/*listNSLL.insertPosition(71, 3);
	listNSLL.printSLL();*/
	cout << endl;
	//listNSLL.deleteNode(6);
	//listNSLL.printSLL();
	cout << endl;
	//listTest.printSLL();
	system("PAUSE");
	return 0;
}

