//Ortiz
//Fabian
//ITI  2410 C++ Fall 2020
// November 18, 2020
// Lab 6 tryIt6A -- Functions and Function Calls
// Determine what each output statement will print. Then run the
// program to see if you are correct. If any of your answers are
// wrong, figure out why the program produced the output it did.
#include <iostream>
using namespace std;

// Function prototypes
void printMessage();
int tripleIt(int);

/*****     main     *****/
int main()
{  int value = 2;
   
   cout << "Hello from main.\n";                    // Hello from main. // correct
   printMessage();
   
   cout << "\nValue returned by tripleIt is "       // 8                // correct
        << tripleIt(value) << endl;
   cout << "In main value now is "                  // 2                //correct
        << value << endl << endl;
   
   value = tripleIt(value);                         // 8.               //correct
   cout << "In main value now is " 
        << value << endl;
        
   value = tripleIt(value);                         //512               //correct
   cout << "In main value now is " 
        << value << endl << endl;
   
   cout << "Goodbye from main.\n";                  // Goodbye from main // correct       
   return 0;
}

/*****    printMessage    *****/
void printMessage()
{
   cout << "Hello from PrintMessage.\n";            // Hello from print message // correct
}

/*****    tripleIt    *****/
int tripleIt(int someNum)
{
   return someNum * someNum * someNum;
}
