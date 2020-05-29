#pragma once
#include <iostream>
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