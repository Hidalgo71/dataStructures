//#pragma once
#include <iostream>
#include <cassert>
using namespace std;

template <class nodeT>
struct nodeLL
{
	int data;												//Data inside the node
	nodeLL* link;											//Address next node
};

template <class nodeT>
class linkedList
{
	int count;

	nodeLL<nodeT> *head, *tail;								//Moving inside the Linked list
	
public:
	linkedList();											//Constructor
	void insertFirst(nodeT item);
	void insertLast(nodeT item);
	void insertPosition(nodeT item, int pos);
	void printSLL();
	~linkedList();
};

template <class nodeT>
linkedList<nodeT>::linkedList()
{
	head = NULL;											//Null, no point any node, no node yet.
	tail = NULL;
	count = 0;
}

template <class nodeT>
void linkedList<nodeT>::insertFirst(nodeT item)
{
	nodeLL<nodeT>* newNode = new nodeLL<nodeT>;				//Creating new node nodeLL type
	newNode->data = item;									//Nodes data, we don't know yet. This like add nodes data.
	newNode->link = head;									//Head is a pointer, assaign nodes link to head node
	head = newNode;
	if (tail == NULL)										//assign newnode to tail
		tail = newNode;
	count++;													//node counter
}

template <class nodeT>
void linkedList<nodeT>::insertLast(nodeT item)
{
	nodeLL<nodeT>* newNode = new nodeLL<nodeT>;				//Creating new node nodeLL type
	newNode->data = item;									//Nodes data, we don't know yet. This like add nodes data.
	newNode->link = NULL;									//Last node address no node
	
	if (head==NULL)											//Checking node exist
	
		head = newNode;
	else
		tail->link = newNode;								//Addressing tail node to new node
	tail = newNode;											//Making tail is a new node
	count++;	
}

template <class nodeT>
void linkedList<nodeT>::printSLL()
{
	nodeLL<nodeT>* current;									//Creating pointer for not losing head, Traverse
	for (current = head; current != tail; current = current->link)
		cout << current->data << " ";
	cout << current->data << " ";
}

template <class nodeT>
void linkedList<nodeT>::insertPosition(nodeT item, int pos)
{
	if (pos == 0)											//Checking head is null
		insertFirst(item);									//Creating 1st node
	else if (pos >= count - 1)								//Checking last node
		insertLast(item);									//Creating last node
	else
	{
		nodeLL<nodeT>* newNode = new nodeLL<nodeT>;
		newNode->data = item;
		nodeLL<nodeT>* cur = head;							//For traversing in the LL, and not losing Head pointer
		for (int i = 0; i < pos - 1; i++, cur = cur->link)	//Finding node which is intended(istenilen) position 1 node before
			newNode->link = cur->link;						//Connecting node with insertAt node!
		cur->link = newNode;								//Connecting insertAt link to the next nodes link
	}
	count++;
}

template<class nodeT>
linkedList<nodeT>::~linkedList()
{
	nodeLL<nodeT>* temp;
	while (head != NULL)									//To delete all nodes
	{
		temp = head;										//Head copied in temp
		head = head->link;									//Head linked next node	
		delete temp;										//temp deleted
	}
	tail = NULL;
	count = 0;
}