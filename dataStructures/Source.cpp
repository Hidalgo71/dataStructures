#include <iostream>
#include "singleLL.h"

using namespace std;

int main()
{
	char item;

	//cout << "working";

	linkedList<char> listNSLL;

	cout << "Create Number Single Linked List: "
		<< "\nCTRL+Z for exit!" << endl;
	cin >> item;

	while (!cin.eof())
	{
		listNSLL.insertFirst(item);
	}


	listNSLL.printSLL();
	system("PAUSE");
	return 0;
}

