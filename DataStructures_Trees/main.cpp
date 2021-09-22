#include <iostream>
#include <cstdlib>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
	
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree
{
	Node *root;
public:
	BinarySearchTree()
	{
		root = NULL;
	}
	
	void insert_node(int data)
	{
		bool node_found = false;
		
		Node *new_node = new Node(data);
		
		if (root == NULL) //if it's the first node assign the new one as root
		{
			root = new_node;
			cout << "assigned " << new_node->data << " as root node" << endl;
			return;
		}
		
		else if (data == root->data) //if it's the same node then do nothing
		{
			cout << "this node exists as the root" << endl;
			return;
		}
		
		Node *current_node = root;
		
		while (!node_found)
		{
			if (data < current_node->data)
			{
				if (current_node->left == NULL)
				{
					node_found = true;
					current_node->left = new_node;
					cout << "assigning " << new_node->data << " to the left of " << current_node->data << endl;
					return;
				}
				//cout << "moved to the left of " << current_node->left << endl;
				current_node = current_node->left;
			}
			
			if (data > current_node->data)
			{
				if (current_node->right == NULL)
				{
					node_found = true;
					current_node->right = new_node;
					cout << "assigning " << new_node->data << " to the right of " << current_node->data << endl;
					return;
				}
				//cout << "moved to the right of " << current_node->right << endl;
				current_node = current_node->right;
			}
		}
	}
	
	void lookup(int data)
	{
		
	}
};

/*
 * void display()
    { // this display function uses in-order traversal left->root->right
        // here we are using stack data structure for traversing 
        stack<Node *> s;
        Node *temp = root;

        while (temp != NULL || s.empty() == false)
        {

            while (temp != NULL)
            {
                s.push(temp);
                temp = temp->left; // going towards left first
            }
            temp = s.top();
            cout << temp->data << "  "; // printing the left most data.
            s.pop();

            temp = temp->right; // going towards right.
        }
    }
	 * */

int main()
{
	BinarySearchTree *bst = new BinarySearchTree();
	bst->insert_node(100);
	bst->insert_node(100);
	bst->insert_node(50);
	bst->insert_node(150);
	bst->insert_node(25);
	bst->insert_node(175);
}



/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
