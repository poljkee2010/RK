#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node * next;
};

class List
{
	Node *Head;
public:
	List() 
	{ 
		Head = NULL; 
	}
	~List()
	{
		while (Head != NULL)
		{
			Node *temp = Head->next;
			delete Head;
			Head = temp;
		}
	}
	void Add(int x)
	{
		Node *temp = new Node;
		temp->data = x;
		temp->next = Head;
		Head = temp;
	}
	void Show()
	{
		Node *temp = Head;
		while (temp != NULL)
		{
			cout << temp->data << "";
			temp = temp->next;
		}
	}
	Node * reverse(Node * head)
	{
		Node *rev = NULL;
		for (Node *node = head, *next_nod; node != NULL; node = next_nod)
		{
			next_nod = node->next;
			node->next = rev;
			rev = node;
		}
		return rev;
	}
};

int main()
{
	return 0;
}
