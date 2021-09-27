#include <iostream>
using namespace std;

// 5! = 5*4*3*2*1 = 120						 Or 5! = 5 * 4!

	int find_factorial_recursive(int num)
{
	//if we are trying to find factorial of 1 or 0 return 1.  this is also the base case
	if (num == 1 || num == 0)
	{
		cout << "base case reached" << endl;
		return 1;
	}
	else //recursive case
	{
		cout << "calling factorial function again - recursive case" << endl;
		return num*find_factorial_recursive(num-1); // multiply num by result of factorial function of num-1
	}
}



int main()
{

	int fact{5};
	int answer{find_factorial_recursive(fact)}; //decalre int variable answer by calling factorial function with argument fact
	
	cout << "answer is " << answer << endl;
	
}



/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
