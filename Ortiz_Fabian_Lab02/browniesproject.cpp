//Ortiz
//Fabian
//ITI 2410 C++ Fall 2020
// October 22, 2020 
// brownies.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM. 
// PUT YOUR NAME HERE.
// INCLUDE THE FILE NEEDED TO DO I/O
#include <iostream>
using namespace std;

int main()
{   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE. 
   double width, length, panarea, size, smallpan, bigpan;
   
            width = 0;
            length = 0;
            panarea = 0;
            smallpan = 1;
            bigpan = 4;
   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
    cout << "Enter the width of the pan." << endl ;
   cin >> width;
   cout <<  "Enter the length of the pan" << endl ;
   cin >> length;
   
   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
   
    panarea = width * length;
   smallpan = panarea / smallpan ;
   bigpan = panarea / bigpan ;
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
     cout << "For a " << width << "x" << length << " sized pan it can have "
      << smallpan << " small brownies and " << bigpan << " big brownies." ; 
   return 0;
}
// Step 2 no errors and code runs good
/*step 3 and 4 

   output 1
   Enter the width of the pan.
   12
   Enter the length of the pan
   9
   For a 12x9 sized pan it can have 108 small brownies and 27 big brownies.

   output 2 
   Enter the width of the pan.
   8
   Enter the length of the pan
   8
   For a 8x8 sized pan it can have 64 small brownies and 16 big brownies.

   output 4
   Enter the width of the pan.
   18
   Enter the length of the pan
   12
   For a 18x12 sized pan it can have 216 small brownies and 54 big brownies.



*/
