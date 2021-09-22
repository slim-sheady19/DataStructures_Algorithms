#include <iostream>
using namespace std;

int main()
{ 
	//for C++ solution https://github.com/slim-sheady19/Data-Structures-and-Algorithms/blob/master/LinkedList-dataStructure/LL-implementation/main.cpp
	
	//pseudocode / js
	
	//PREPEND
	prepend(value)
	{
		const newNode =
		{
			value: value
			//next: this.head
			next: null //set it to null for now
		}
	console.log(newNode)
	//this.head.next = this.head
	newNode.next = this.head
	//rest OK
	this.head = newNode
	this.length++
	return this

	//INSERT
	
	insert(index, value)
	{
		//first find the position by creating array of positions
		int position_count {0};
		//int index[] {};
		let currentNode = this.head;
		//traverse the list
		while (position_count <= index)
		{
			currentNode = currentNode.next
			position_count++;
			if (position_count == index)
			{
				//create new node
				newNode(value)
				value = value
				next = null
				break;
			}
		}
		newNode.next = currentNode
		this.length++
		return this;
		
	}
	
	//REVERSE
	
	revers()
	{
		//first get number of elements in list and store as int
		int elements {0};
		bool reached_null = false;
		Node current_node = this.head_node;
		
		//should put if statement for only 1 element
		while (!reached_null)
		{
			current_node = current_node->next;
			elements++;
			if (current_node->next == null)
			{
				reached_null = true;
			}
		}
		
		
		//nested loops to reverse the list
		//first loop iterates through all elements, change tail to head
		//second loop starts at head + i to push tail-1 to tail
		Node head_node = this->head_node;
		Node tail_node = this->tail_node;
		for (int i = 0; i < elements/2; i++)
		{
			head_node = this.traverse_to_index(i)
			tail_node = this.traverse_to_index(elements-i);
			
		}
		
		
	}
}
//1, 10, 16, 88
//88, 16, 10, 1

/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
