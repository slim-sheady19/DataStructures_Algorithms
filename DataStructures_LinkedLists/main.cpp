#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:

	int value;
	Node *next;
	
	Node(int value)
	{
		this->value = value;
		this->next = nullptr;
	}
};

class LinkedList
{
public:

	Node *head;
	Node *tail;
	int length{0};

	LinkedList(int value)
	{
		Node *first = new Node(value);
		
		head = first;
		tail = first;
		length++;
		cout << "first node created in new LinkedList object" << endl;
	}
	
	void prepend(int value)
	{
		Node *new_node = new Node(value);
		
		if (length == 1)
		{
			head = new_node;
			head->next = tail;
			length++;
			cout << "new head is " << head->value << endl;
		}
		else
		{
			new_node->next = head;
			head = new_node;
			length++;
			cout << "new head is " << head->value << endl;
		}
	}
	
	void append(int value)
	{
		Node *new_node = new Node(value);
		
		if (length == 1)
		{
			head->next = tail;
			cout << "node next to head is " << head->next->value << endl;
		}
		else
		{
			tail->next = new_node;
		}
		tail = new_node;
		
		cout << "new node " << value << " appended at end of LL " << endl;
	}
	
	void insert(int index, int value)
	{
		//first traverse to the index by incrementing an int
		int traverse {0};
		Node *current_node = head;
		Node *prev_node;
		
		while (current_node != nullptr)
		{
			prev_node = current_node;
			current_node = current_node->next;
			traverse++;
			if (traverse == index)
			{
				Node *new_node = new Node(value);
				new_node->next = current_node;
				prev_node->next = new_node;
				length++;
				break;
			}
		}
	}
	
	void reverse()
	{
		//spawn new Linked List with head as first value
		
		LinkedList *reversed_list = new LinkedList(this->head->value);
		
		//loop through first LL starting at index 1 since head is already spawned.
		Node *current_node = head;
		
		for (int i = 1; i < this->length; i++)
		{
			current_node = current_node->next;
			reversed_list->prepend(current_node->value);
		}
		cout << "calling reversed list print inside reverse method" << endl;
		reversed_list->print_list();
	}
	
	void print_list()
	{
		//vector<Node> *vec{};
		Node *current_node = head;
		while (current_node != nullptr)
		{
			cout << current_node->value << endl;;
			current_node = current_node->next;
		}
	}
};

int main()
{ 
	LinkedList *list = new LinkedList(10);
	list->append(15);
	list->append(20);
	cout << list->head->next->value << endl;
	cout << list->tail->value << endl;
	list->prepend(30);
	cout << list->head->value << endl;
	cout << list->head->next->value << endl;
	list->prepend(40);
	cout << list->head->value << endl;
	cout << list->head->next->value << endl;
	cout << "calling print list method" << endl;
	list->print_list();
	cout << "calling insert method index 2 value 50" << endl;
	list->insert(2, 50);
	list->insert(1, 100);
	list->print_list();
	cout << "reversing list " << endl;
	list->reverse();
}


/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
