#pragma once

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

	nodeLL<nodeT> *head, * tail;							//Moving inside the Linked list

public:
	linkedList();											//Constructor
	void insertFirst(nodeT item);
	void insertLast(nodeT item);
	void insertPosition(nodeT item, int pos);
	~linkedList();
};

template <class nodeT>
linkedList<nodeT>::linkedList()
{
	head = NULL;											//Null, no pont any node, no node yet.
	tail = NULL;
	count = 0;
}

template <class nodeT>
void linkedList<nodeT>::insertFirst(nodeT item)
{
	nodeLL<nodeT>* newNode = new nodeLL<nodeT>;				//Creating new node nodeLL type
	newNode->data = item;									//Nodes data, we don't know yet. This like add nodes data.
	newNode->link = head;									//

}