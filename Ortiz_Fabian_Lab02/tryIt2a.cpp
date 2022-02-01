//Ortiz Andrade
//Fabian
//ITI 2410 C++ Fall 2020
//October 21, 2020
// Lab 2 tryIt2A -- Printing constants and variables                //Expected Output                   //Observed Output 
#include <iostream>
using namespace std;

int main()
{   int x = 1, y = 3;
	 int X = 2, Y = 4;

	cout << "tryIt 2A" <<endl;                                     // it will print tryIt2a             // tryIt2a
	cout << x << y << endl;                                        // print each number                 // 13
	cout << "x" << "y" << endl;                                    //  print out letters                //xy
	cout << X << " " << Y << endl;                   //  print each number with space between           //2 4
	cout << 2 * x + y << endl;                                     //  multiply and add                 //5
   cout << 2 * X + Y << endl;                                      // multiply and add                  //8
	//cout << x + 2*y << endl;                                     //just a comment                     //just a comment
	cout << "x = ";
	cout << x;
	cout << " y = ";                                    //  say what number is with what variable      // x=1 y= 3 
	cout << y;
   
   return 0;
}

// cout << x;    this will print out the letter x
// cout << "x"; will print out the value assigned to it