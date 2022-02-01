// average.cpp
// This program finds the average of two numbers.
// It contains two errors that must be fixed.
//Ortiz
//Fabian
//ITI 2410 C++ Fall 2020
//October 14, 2020

#include <iostream>
using namespace std;

int main ()
{
    int size = 2;             // The number of values to be averaged
   double num1,
          num2,
          average;           // Average of num1 and num2
   
   // Get the two numbers
   cout << "Enter two numbers separated by one or more spaces: ";
   cin  >> num1 >> num2;
   
   // Calculate the average
    average = (num1 + num2) / size;
 
    // Display the average
   cout << "The average of the two numbers is: " << average << endl;
   
   return 0;
}
// Enter two numbers separated by one or more spaces: 10 5
// The average of the two numbers is:  12.5
