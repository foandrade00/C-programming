//Ortiz
//Fabian
//ITI 2410 Intro to C++
//November 19, 2020

// Lab 6 choice.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
#include <iostream>
#include <cmath>
using namespace std;

int getChoice();

int main()
{
   int choice,max,min;

   
   choice = getChoice();
   
   
   cout << "You entered " << choice << endl;
}

int getChoice()
{
   int input,min,max;

   do{   
   cout << "Enter the max value in the range" << endl;
   cin >> max;
   cout << "Enter the min value in the range" << endl;
   cin >> min;
   cout << "Enter an integer between " << min << " and " << max << " .";
      cin >> input;


      if (input < min || input > max)

   {  cout << "Invalid number enter an integer between " << min << " and " << max << " .";

      cin  >> input;
   }
     }
   while (input < min || input > max);
                                        return input;
} 
/* 
Step 2 
sample run #1
Enter an integer between 1 and 4: 0
Invalid input. Enter an integer between 1 and 4: 9
You entered 2

step 5 
Programs complies with out error and you can now input a max and min range

*/
