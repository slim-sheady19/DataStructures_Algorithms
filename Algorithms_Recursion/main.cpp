#include <iostream>
using namespace std;

#include <vector>
vector<int> memo; //global vector of ints

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

// FIBONACCI 
//Given a number N return the index value of the Fibonacci sequence, where the sequence is:

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 ...
// the pattern of the sequence is that each value is the sum of the 2 previous values, that means that for N=5 → 2+3

int fibonacci(int num)
{
	/*		GARBAGE
	 * int num1{num-num};
	int num2{num2*num};
	int current_sum{num1+num2};
	
	
	//base case
	if (current_sum >= num)
	{
		return current_sum;
	}
	
	num1 = num2;
	num2 = current_sum;
	//recursive case
	return fibonacci_recursive(current_sum);
	 * 
	 * SOLUTION*/
	 
	 if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    if (memo[num] != 0)
        return memo[num];
    memo[num] = fibonacci(num - 1) + fibonacci(num - 2);
    return memo[num];
	
	
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
