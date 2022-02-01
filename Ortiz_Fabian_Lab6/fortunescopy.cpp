// Lab 6 fortunes.cpp 
// This fortune telling program will be modified to use a void function.
// Ortiz
//Fabian
//ITI 2410 C++ Fall 2020
// November 18,2020
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
// WRITE A PROTOTYPE FOR THE tellFortune FUNCTION HERE.
void tellFortune() ;
int numYears();
int numChildren();
/*****     main     *****/
/*int main()
{
   int numYears,
       numChildren;
          
   cout << "This program can tell your future. \n"
        << "Enter two integers separated by a space: ";
        
   cin >> numYears >> numChildren;
   
   numYears = abs(numYears) % 5;       // Convert to a positive integer 0 to 4
   numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5
   
   cout << "\nYou will be married in " << numYears << " years "
        << "and will have " << numChildren << " children.\n";
  
   return 0;
}
*/
/*****     tellFortune     *****/
void tellFortune()
{
    cout << "This program can tell your future.\n ";
    cout << "Enter two integers separated by a space: ";
    
    
}
int main()
{
   int numYears,
       numChildren;
          
   cout << "This program can tell your future. \n"
        << "Enter two integers separated by a space: ";
        
   cin >> numYears >> numChildren;
   
   numYears = abs(numYears) % 5;       // Convert to a positive integer 0 to 4
   numChildren = abs(numChildren) % 6; // Convert to a positive integer 0 to 5
   
   cout << "\nYou will be married in " << numYears << " years "
        << "and will have " << numChildren << " children.\n";
  
   return 0;
}

// WRITE THE BODY OF THE tellFortune FUNCTION HERE.
/* Step 2 Answers

You will be married in 4 years and will have 2 children.


*/