#include <iostream>
#include <string>
using namespace std;

string reverse(string str)
	{
		string str_reversed = str;
		int str_length = str.length();
		
		for (int i = 1; i <= str_length; i++)
		{
			str_reversed[i-1] = str[str_length-i];
		}
		return str_reversed;
	}
	
	void merge_arrays(int arr1 [], int arr2 [], int size1, int size2)
	{
		int new_array_size {size1+size2};
		int merged_arrays[new_array_size];
		int i;
		
		for (int i = 0; i < size1; i++) //consider collapsing in to its own function for readability - same for next loop
		{
			merged_arrays[i] = arr1[i];
			cout << merged_arrays[i] << "," << endl;
		}
		int k = i; //REMEMBER THIS PART AND THE REST OF THE LINES WITH K
		for (int j = 0; j < size2; j++)
		{
			
			merged_arrays[k] = arr2[j];
			k++; 
			cout << merged_arrays[j] << ",";
		}
	}
	
	

int main()
{	
	//Video 69 Reverse a string
	cout << "Sreversing string function" << endl;
	string str = " hi my name is shea";
	string reversed_string = reverse(str);
	
	cout << reversed_string << endl << endl;
	
	
	//Video 71 Merge sorted arrays
	//https://codescracker.com/cpp/program/cpp-program-merge-two-arrays.htm
	cout << "Starting marged arrays function" << endl;
	
	int array1[] {0,3,4,31};
	int array2[] {4,6,30};
	
	int size1 = sizeof(array1)/sizeof(array1[0]);
	int size2 = sizeof(array2)/sizeof(array2[0]);
	
	//the function needs a size because the function does not know automatically!
	merge_arrays(array1, array2, size1, size2);
}



/*******************************NOTES********************************************
 * other ways with built-in functions
 * 
 * string str;
    cout << "Enter String of your choice..." << endl;
    getline(cin, str); // Input is taken from the user

    string str2 = str; // Making another string which is same as the input string

    //  Print the entered string
    cout << "Entered String is: " << str << endl;

    // Inbuilt Function which reverses the string
    reverse(str.begin(), str.end());

    // Another way to reverse a string by swapping element with start and front
    int len = str2.length();
    int n = len - 1;
    int i = 0;
    while (i <= n)
    {
        swap(str2[i], str2[n]); // Inbuilt Function that swaps 2 elements
        n--;                    // Decrementing value of n by 1 after each iteration
        i++;                    // Incrementing value of i by 1 after each iteration
    }

    cout << "Reversed String is: " << endl;
    cout << str << endl;
    cout << str2 << endl;

    return 0;
 * 
 * 
 * 
 * ********************************************************************************/
