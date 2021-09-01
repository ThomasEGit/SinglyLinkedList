#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
using namespace std;
struct Node
{
	string stringData;
	Node* next;
};

class LinkedList
{

private:
	int size;
	Node* head;
	Node* tail;

public:
	LinkedList();
	~LinkedList();
	bool isEmpty() const;
	int getSize() const;
	string getData(int nodeNumber);
	void addNode(string inputString);
	void setNode(int nodePos, string newString);
	void removeNode(int removeNode);
	void printList();
};

#endif
