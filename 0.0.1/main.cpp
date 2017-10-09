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
	List():Head(NULL){}

	~List()
	{
		while (Head != NULL)
		{
			Node *temp = Head->next;
			delete Head;
			Head = temp;
		}
	}
	void Addition(int x)
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
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	Node * reverse(Node * head)
	{
		Node *tmp = head;
		Node *n = tmp;
		while (n->next != 0)
			n = n->next;

		head = n;

		while (n != tmp) 
		{
			n = tmp;
			while (n->next->next != 0)
			{
				n = n->next;
			}
			n->next->next = n;
			n->next = 0;
		}
	}
};

int main()
{
	return 0;
}
