#include <iostream>
#include <map>
using namespace std;

int main()
{
	int arr1[] {2,5,6,7,3,5,1,2,4};
	int arr2[] {2,1,1,2,3,5,1,2,4};
	
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	
	map<int, int> m;
	
	//insert new pair to map
	/*pair<int, int> p1 {2, 5};
	m.insert(p1);
	m.insert(make_pair(3,1));*/
	//cout << m[2] << endl << m[3] << endl; //OK
	
	//generate the hash table with map from STL
	for (int i = 0; i < size1; i++)
	{
		m.insert(make_pair(i+1,arr1[i]));
		
		if (m.count(i+1) > 0)
		{
			
			//cout << arr1[i] << "is an element of the map" << endl;
			cout << arr1[i] << "is the first recurring char" << endl;
			break;
		}
		
		/*for (int j = 0; j < size1; j++)
		{
			int temp = arr1[j];
			if (temp == m[i])
			{
				cout << "found it";
			}
		}*/
		//cout << m[i] << endl;
	}
		

	//find first recurring character in array1
	/*for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << endl;
		for (int j = 0; j < size1; j++)
		{
			int temp = m.at(i);
			if (temp == m.at(i))
			{
				cout << "got it";
			}
		}
	}*/
}

/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
