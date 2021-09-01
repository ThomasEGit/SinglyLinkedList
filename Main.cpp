#include <iostream>
#include "LinkedList.h"
#include <string>

double x=  5.6;

using namespace std;


void testFunction()
{
	LinkedList destructorTest;

	destructorTest.addNode("One");
	destructorTest.addNode("Two");
	return;
}

int main()
{
	testFunction();
	LinkedList Test;

	//-------Testing 1 node and delete-------//  CHECKED
	//Test.addNode("Node0");
	//Test.printList();
	//cout << "-------------------------" << endl;
	//Test.removeNode(0);
	//Test.printList();
	//cout << "-------------------------" << endl;
	
	//-------Testing 3 node and delete head-------// CHECKED HEAD DELETED
	//Test.addNode("Node0");
	//Test.addNode("Node1");
	//Test.addNode("Node2");
	//Test.printList();
	//cout << "-------------------------" << endl;
	//Test.removeNode(0);
	//Test.printList();
	//cout << "-------------------------" << endl;
	
	//-------Testing 3 node and delete middle-------// CHECKED MIDDLE DELETED
	//Test.addNode("Node0");
	//Test.addNode("Node1");
	//Test.addNode("Node2");
	//Test.printList();
	//cout << "-------------------------" << endl;
	//Test.removeNode(1);
	//Test.printList();
	//cout << "-------------------------" << endl;
	
	//-------Testing 3 node and delete tail-------// CHECKED TAIL DELETED
	Test.addNode("Node0");
	Test.addNode("Node1");
	Test.addNode("Node2");
	Test.printList();
	cout << "-------------------------" << endl;
	Test.removeNode(2);
	Test.printList();
	cout << "-------------------------" << endl;
}
