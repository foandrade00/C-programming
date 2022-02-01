//Ortiz
//Fabian
//ITI 2410 C++ Fall 2020
// October 21,2020

// Lab 2 tryIt2C -- Arithmetic Operators and Assignment Statements            //Expected                //Outcome            
#include <iostream>
using namespace std;

int main()
{   int a = 5, b = 2, answer1;
	 double c = 2.0, answer2;

	cout << "tryIt2C" << endl;                                                 // print tryIt2c     // correct
   cout << a + b << "  " << a - b << endl;          //answer of adding space then show answer of difference  // correct   
   cout << a * b << "  " << a % b << endl;       // multiply answer space and percentage answer    // correct   
	cout << a / b << "  " << a / c << endl;  //show quotient answer of ab then quotient answer of ac    //correct
   
	answer2 = a / c;
   answer1 = answer2;
   cout << answer1 << "  " << answer2 << endl;               //print answer, space and print answer     //correct
   
   a = a - 1;
	b = a * 2;
	c = a * b + c;
	cout << a << "  " << b << "  " << c << endl;     //  print each value with space between each      //correct   

   return 0;
}
