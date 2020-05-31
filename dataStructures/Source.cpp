#include <iostream>
#include "singleLL.h"
#include"doublyLL.h"

using namespace std;

int main()
{
	int item;

	//cout << "working";

	linkedList<char> listCSLL;
	linkedList<int> listNSLL;

	cout << "Create Number Single Linked List: "
		<< "\nCTRL+Z for exit!" << endl;
	cin >> item;

	while (!cin.eof())
	{
		listNSLL.insertFirst(item);
		cin >> item;
	}


	listNSLL.printSLL();
	//listTest.printSLL();
	system("PAUSE");
	return 0;
}

