#include <iostream>
#include <map>
#include <string>
using namespace std;
const int ARRAY_SIZE = 50;
const int bucket_size = 5;

class HashNode
{
	public:
	string key{};
	int value;
	
	HashNode(string key, int value)
	{
		this->key = key;
		this->value = value;
	}
	
	void print()
	{
		cout << key << value << endl;
	}
};

/*class HashBucket()
{
	HashNode bucket*[bucket_size]{};
public:
	
	HashBucket()
	{
		bucket = new HashNode*[bucket_size];

	}
	
}*/

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
	
	void set(string key, int value)
	{
		int address = hashFunction(key); //call hash function to generate an address based on string 'key' e.g. grapes
		
		if (!arr[address]) //check the address in the array is null, if so then spawn new hashnode there
		{
			arr[address] = new HashNode(key, value);
		}
		else
		{
			
		}
		
		arr[address]->print();
	}
	
	void get(string key)
	{
		int address = hashFunction(key);
		
		if (arr[address])
		{
			cout << "get method called with key: ";
			arr[address]->print();
		}
		else
		{
			cout << key << " does not exist" << endl;
		}
		
		/*for (int i = 0; i < ARRAY_SIZE; i++)
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
		}*/
	}
	
	// creating a hash function(this is an example of open addressing)
    int hashFunction(string key)
	{
		int hash{0};
		for (int i = 0; i < key.length(); i++)
		{
			hash = (hash + key.at(i) * i) % ARRAY_SIZE;
		}
		//cout << hash << endl;
        return hash % ARRAY_SIZE;
    }
	
	
};

int main()
{
	
	HashTable *table = new HashTable();
	/*cout << table->hashFunction(20);
	cout << table->hashFunction(101);*/
	
	table->set("grapes", 69);
	table->set("oranges", 30);
	table->set("watermelons", 1);	//collision at address 23
	table->set("apples", 3);
	table->get("oranges");
	
	//PRACTICE WITH MAPS FROM THE STL
	
	/*map<string, int> map
	{
		{"grapes", 25},
		{"oranges", 15}
	};
	
	
	cout << "****STARTING MAPS CODE*****" << endl;
	
	cout << map.size() << endl;
	
	pair<string, int> p1 {"watermelons", 5};
	map.insert(p1);
	
	cout << map.size() << endl;
	
	map.insert(make_pair("apples", 20));
	
	map["cantaloupe"] = 7;
	
	if (map.find("apples") != map.end())
		{
			cout << "Found apples" << endl;
		}
		
	auto it = map.find("watermelons");
	if (it != map.end())
	{
		cout << "Found " << it->first << ": " << it->second << endl;
	}*/
	
	
	//Google Question
//Given an array = [2,5,1,2,3,5,1,2,4]:
//It should return 2

//Given an array = [2,1,1,2,3,5,1,2,4]:
//It should return 1

	int arr1[9] {2,5,1,3,0,6,7,4,4};
	int arr2[9] {2,1,1,2,3,5,1,2,4};
	
	//cout << arr1[8];
	
	//create map
	map<int, int>m;
	
	// loop through array and map each element to an int that gets incremented
	for (int i = 0; i < sizeof(arr1); i++)
	{
		if (m.find(arr1[i]) != m.end()) //
		{
			cout << "found first recurring pair: " << arr1[i] << endl;
			break;
		}
		else
		{
			m.insert(make_pair(arr1[i], 1));
		}
	}
	
	//nest a loop inside that checks all previous elements if it's been mapped already - meaning it's already ocurred once
	
}


/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
