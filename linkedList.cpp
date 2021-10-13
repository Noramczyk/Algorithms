#include <iostream>

using namespace std;


class Node 
{

	public:
		int data;
		Node* next;
};

void printList(Node* n)
{
	while(n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;	
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();		//Allocate 3 Nodes
	second = new Node();
	third = new Node();

	head->data = 1;			//Assign data to Node
	head->next = second;		// Link Node

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);

	return 0;

}

