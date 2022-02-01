// greeting.cpp
// This program prints a message to greet the user.
//Ortiz
//Fabian
//ITI 2410 C++ Fall 2020
//October 14, 2020
#include <iostream>         // Needed to do C++ I/O
#include <string>           // Needed by some compilers to use strings
using namespace std;

int main ()
{ // Step 2: I expect the program will display Hello, Adam
    string name;             // This declares a variable to
                            // hold the user's name
   // Get the user's name
   cout << "Please enter your first name: ";
   cin  >> name;
   
   // Print the greeting
    cout << "Hello, " << name << "." << endl;
 
    return 0;
}
// Step 3: Please enter your first name:
// Step 4: first answer:::: Yes
// Step 4: second answer:::: Please enter your first name: Fabian
// Hello, Fabian.
