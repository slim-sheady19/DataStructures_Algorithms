#include <iostream>
#include <map>
#include <string>
using namespace std;
const int ARRAY_SIZE = 50;

class HashNode
{
	public:
	string key{};
	int value;
	
	HashNode(string name, int value)
	{
		this->key = name;
		this->value = value;
	}
};

class HashTable
{
    HashNode **arr; // declaring array of hash node
public:

    HashTable()
	{
        arr = new HashNode*[ARRAY_SIZE]; // creating array of hash node.
        for(int i = 0; i < ARRAY_SIZE; i++)
		{
            arr[i] = NULL;
        }
    }
	
	void set(string name, int value)
	{
		int key = hashFunction(value);
		arr[key] = new HashNode(name, value);
		cout << name << " has been set to key " << key << "in the hash table with value " << value << endl;
	}
	
	void get(string name)
	{
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			if (arr[i]->key == name)
			{
				cout << arr[i]->key << " has value of " << arr[i]->value << endl;
				return;
			}
			else
			{
				cout << "this item does not exist" << endl;
			}
		}
	}
	
	// creating a hash function(this is an example of open addressing)
    int hashFunction(int key)
	{
        return key % ARRAY_SIZE;
    }
	
	
};

int main()
{
	HashNode *node = new HashNode("fuck", 5);
	//cout << node->key;
	
	HashTable *table = new HashTable();
	/*cout << table->hashFunction(20);
	cout << table->hashFunction(101);*/
	
	table->set("grapes", 69);
	table->get("grapes");
}

/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
