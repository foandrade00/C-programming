// Lab 2 tryIt2B -- Using endl and \n
#include <iostream>
using namespace std;

int main()                                      //Expected                      //Outcome
{  
	cout << "tryIt2B" << '\n';                  // print out the words in"""   //tryIt2B    
   cout << "Hello " << "endl";                  // print out Hello and endl    // Hello endlHello
	cout << "Hello " << endl;                  // Print out Hello              //Hello /nHello\nHello
   cout << "Hello /n";                          // print out Hello
   cout << "Hello \\n";                          // print out Hello
   cout << "Hello \n";                           // print out Hello
    
   return 0;
}
