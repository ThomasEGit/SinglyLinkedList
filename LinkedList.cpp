#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

LinkedList::~LinkedList()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
	tail = nullptr;
	size = 0;
	cout << "Destructor called" << endl;
}

bool LinkedList::isEmpty() const
{
	if (size == 0)
	{
		return true;
	}
	return false;
}

int LinkedList::getSize() const
{
	return size;
}


string LinkedList::getData(int nodeNumber)
{
	//If nodeNumber exist within the LinkedList
	if (nodeNumber >= size)
	{
		return "No";
	}
	Node* temp = head;

	for (int i = 0; i < nodeNumber; i++) //Watch out for your indexing. Important to check if you want zero indext or one.
	{
		temp = temp->next;
	}
	return temp->stringData;
}
void LinkedList::addNode(string inputString)
{
	//If there is no linked list at all
	//I need to change the head to the new node that is being added
	//I need to also change tail to the new node that is being added
	//allocating new memor. Node* is a pointer that points to the new node


	Node* newNode = new Node;

	newNode->stringData = inputString;
	newNode->next = nullptr;

	if (head == nullptr) //If this node that is added is the first.
	{
		head = newNode;
	}
	else
	{
		tail->next = newNode;
	}
	tail = newNode;
	size++;
}
void LinkedList::setNode(int nodePos, string newString)
{
	if (nodePos >= size)
	{
		return;
	}
	Node* temp = head;
	for (int i = 0; i < nodePos; i++)
	{
		temp = temp->next;
	}
	temp->stringData = newString;
}

void LinkedList::removeNode(int removeNodePos)
{
	if (removeNodePos >= size) //If emtpy
	{
		return;
	}
	if (removeNodePos == 0 && size == 1) //If there is one node
	{
		delete head;
		head = nullptr;
		size = 0;
		return;
	}
	else if (removeNodePos == 0) //if deleting at the head, but there are nodes
	{
		Node* temp = head;
		temp = temp->next;
		delete head;
		head = temp;
	}
	else if (removeNodePos == size - 1) // If deleting at tail
	{
		Node* temp = head;
		for (int i = 0; i < removeNodePos - 1; i++)
		{
			temp = temp->next;
		}
		delete tail;
		tail = temp;
		temp->next = nullptr;
	}
	else // If deleting in the middle
	{
		Node* temp = head;
		for (int i = 0; i < removeNodePos - 1; i++)
		{
			temp = temp->next;
		}
		Node* tempConnection = temp->next;
		temp->next = temp->next->next;
		delete tempConnection;
	}
	size--;
}

void LinkedList::printList()
{
	if (0 >= size)
	{
		return;
	}
	Node* temp = head;
	while( temp != nullptr)
	{
		cout << temp->stringData << endl;
		temp = temp->next;
	}
}

