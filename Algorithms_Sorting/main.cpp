#include <iostream>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }

            // swap the minimum index element and first index element
            if (minIndex != i)
                swap(&arr[minIndex], &arr[i]);
        }
    }
}

//merge sort: https://github.com/slim-sheady19/Data-Structures-and-Algorithms/blob/master/SortingAlgorithms/mergeSort/main.cpp


//https://github.com/slim-sheady19/Data-Structures-and-Algorithms/blob/master/SortingAlgorithms/BubbleSort/main.cpp
void bubble_sort(int arr[]) 
{
	int pos1{};
	int pos2{};
	
	for (int i = 1; i < sizeof(arr); i++) //need a nested loop as well
	{
		
		for (int j = 1; j < sizeof(arr); j++)
		{
		pos1 = arr[i-1];
		pos2 = arr[i];
		
		if (pos1 > pos2)
		{
			arr[i] = pos1;
			arr[i-1] = pos2;
		}
		
		}
		cout << arr[i];
	}
}

int main()
{
	int array[] {20,10,30,40,90,5,8};
	bubble_sort(array);
}



/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
