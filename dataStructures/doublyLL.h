#pragma once
#include <cassert>

using namespace std;

template <class nodeT>
struct nodeDLL
{
	nodeT data;
	nodeDLL<nodeT>* next;
	nodeDLL<nodeT>* prev;
};

template <class nodeT>
class doublyLinkedList
{
	nodeDLL<nodeT>* head, * tail;
	int count;
public:
	doublyLinkedList();
	void insertFirst(nodeT);
	void insertLast(nodeT);
	void insertAt(nodeT, int);
	void printBackward();
	void deleteItem(nodeT);
	~doublyLinkedList();
};

template <class nodeT>
doublyLinkedList<nodeT>::doublyLinkedList()						//Constructor
{
	head = NULL;
	tail = NULL;
	count = 0;
}

template <class nodeT>
void doublyLinkedList<nodeT>::insertFirst(nodeT item)
{
	nodeDLL<nodeT>* newNode = new nodeDLL<nodeT>;
	newNode->data = item;
	newNode->next = head;
	newNode->prev = NULL;										//[null I item I head]

	if (tail == NULL)											//Checking any node exist
		tail = newNode;											//Head pointer new node
	count++;
}

template <class nodeT>
void doublyLinkedList<nodeT>::insertLast(nodeT item)
{
	nodeDLL<nodeT>* newNode = new nodeDLL<nodeT>;
	newNode->data = item;
	newNode->next = NULL;
	newNode->prev = tail;										////[tail I item I null]

	if (head == NULL)
	{
		head = newNode;
	}
	else
		tail->next = newNode;									//Adding last position
	tail = newNode;												//make tail new last node
	count++;
}

template <class nodeT>
void doublyLinkedList<nodeT>::insertAt(nodeT item, int order)
{
	if (order == 0)
		insertFirst(item);
	else if (order >= count - 1)
		insertLast(item);
	else
	{
		nodeDLL<nodeT>* newNode = new nodeDLL<nodeT>;
		newNode->data = item;
		nodeDLL<nodeT>* cur = head;								//For traversing in the list
		for (int i = 0; i < order - 1; i++, cur = cur->next);	//To reach wanted position just 1 node behind
		newNode->next = cur->next;								//[][]->[]New node connected to next node
		cur->next->prev = newNode;								//connecting next node to new node(prev pointing)
		cur->next = newNode;									//previous node connected to new node(prev nodes next)
		newNode->prev = cur;									//new node connected to previous node(new nodes prev)
	}
	count++;
}