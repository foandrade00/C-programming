/*Ortiz
 Fabian
 ITI 2410 Intro to C++
 November 19, 2020
 */
// Lab 6 swapNums.cpp -- Using Value and Reference Parameters
// This program uses a function to swap the values in two variables.

#include <iostream>
using namespace std;

// Function prototype
void swapNums(int &a, int &b);

/*****     main     *****/
int main()
{
   int num1 = 5,
       num2 = 7;
       
   // Print the two variable values
   cout << "In main the two numbers are " 
        << num1 << " and " << num2 << endl;
   
   // Call a function to swap the values stored 
   // in the two variables
   swapNums(num1, num2);
   
   // Print the same two variable values again
   cout << "Back in main again the two numbers are " 
        << num1 << " and " << num2 << endl;
                
   return 0;
}

/*****     swapNums     *****/
void swapNums(int &a, int &b)   
{  // Parameter a receives num1 and parameter b receives num2
   // Swap the values that came into parameters a and b
   int temp = a;
   a = b;
   b = temp;
   
   // Print the swapped values
   cout << "In swapNums, after swapping, the two numbers are " 
        << a << " and " << b << endl;
}
/*  

Step 2 This progam will assign two variable and swap thier values. However in the final line
the values did not stay the same.We need to add refrence. 
***Expected***
In main the two numbers are 5 and 7
In swapNums, after swapping, the two numbers are 7 and 5
Back in main again the two numbers are 5 and 7
***observed***
In main the two numbers are 5 and 7
In swapNums, after swapping, the two numbers are 7 and 5
Back in main again the two numbers are 7 and 5

***We added refrence values to the function so that they are not just copies of data
but they can have the values taken from the void function.***

*/
