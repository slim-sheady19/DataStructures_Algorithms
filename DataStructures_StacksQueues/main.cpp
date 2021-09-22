#include <iostream>
#include <cstdlib>
#define SIZE 128
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL; // it should be initialized as NULL, unless it occurs SIGSEGV error.
    }
};

class Stack //LIFO
{
	Node *top;
	public:
	Stack()
	{
		top = NULL;
	}
	
	void peek() //check the top item
	{
		if (top == NULL)
		{
			cout << "stack is empty" << endl;
			return;
		}
		cout << top->data;
	}
	
	void push(int value) //add node to top
	{
		//new_node = Node(value);
		Node *new_node = new Node(value);
		if (top == NULL) //if top is null (stack is empty) just assign the new node to top and return
		{
			top = new_node;
			return;
		}
		//set new node's next to current top, then change top to new node
		new_node->next = top;
		top = new_node;
		
	}
	
	void pop() // remove from top
	{
		if (top == NULL) //if top is null (stack is empty) print a message and return
		{
			cout << "the stack is empty" << endl;
			return;
		}
		Node *temp_node = top;
		top = top->next;
		delete temp_node;
	}
};

class Queue //FIFO
{
	Node *first;
	Node *last;
	int length {};
	
	public:
		Queue()
		{
			this->first = NULL;
			this->last = NULL;
		}
		
		void peek()
		{
			if (length == 0)
			{
				cout << "queue is empty" << endl;
				return;
			}
			
			Node *temp = this->first;
			for (int i = 0; i < length; i++)
			{
				cout << temp->data << "is in position " << i << endl;
				temp = first->next;
			}
		}
		
		void enqueue(int value) //add
		{
			Node *new_node = new Node(value);
			
			if (length == 0)
			{
				first = new_node;
				last = new_node;
				length++;
				return;
			}
			
			new_node->next = last;
			last = new_node; //last not first
			length++;
			
		}
		
		void dequeue() //remove from last in list *REVIEW* video 120
		{
			if (length == 0)
			{
				cout << "no elements in the Queue to dequeue" << endl;
				return;
			}
			
			/*Node *temp = last;
			last = temp->next;
			delete temp;
			length--;*/
			
			Node *temp = last;
			for (int i = 1; i < length - 1; i++)
			{
				temp = temp->next;
			}
			// cout<<temp->data<<endl;
			delete temp->next;
			temp->next = NULL;
			first = temp;
			
		}
};

int main()
{
	Stack *test_stack = new Stack();
	test_stack->push(20);
	
	test_stack->peek();
	test_stack->push(30);
	test_stack->peek();
	test_stack->pop();
	test_stack->pop();
	test_stack->peek();
}


/****************       USING ARRAYS
class Stack
{
    // declaring values
    int top;
    int *arr;

public:
    // initailizing values
    Stack()
    {
        top = -1;
        arr = new int[SIZE];
    }

    // function to push data into stack-[array]
    void push(int data)
    {
        // Overflow check in case the limit exceeds
        if (top >= SIZE - 1)
        {
            cout << "[WRANING]Stack Overflows" << endl;
            return;
        }
        // increment the counter and add the data
        top += 1;
        arr[top] = data;
    }

    // function pops the top most element
    void pop()
    {
        // checking whether the stack is empty or not
        if (top == -1)
        {
            cout << "[WARNING]Stack is empty." << endl;
            return;
        }
        // if its not empty display the top element and decrement top by 1 to delete the top most data
        cout << "[INFO]Popped Element: " << arr[top] << endl;
        top--;
    }

    // function used to peek onto the top most element
    int peek()
    {
        // checking if stack is empty
        if(top < 0) {
            cout << "error : stack is empty";
            return 0;
        }
        return arr[top];
    }

    void display()
    {
        // looping over the stack conditionally
        if (top >= 0)
        {
            cout << "The Stack elements are: " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << "  ";
            }
            cout << endl;
        }
        // if stack is empty then else block is executed
        else
        {
            cout << "[WARNING]Please fill the elements first" << endl;
            return;
        }
    }
};*/


/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
