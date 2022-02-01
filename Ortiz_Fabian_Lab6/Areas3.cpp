//Ortiz
//Fabian
//ITI 2410 Intro to C++
//November 19, 2020


#include <iostream>
#include <string>
using namespace std;

void displayMenu();
void findSquareArea(int length,int area,int answer);
void findCircleArea(int radius,const float PI,int area,char answer);
void findTriangleArea(int length,int height,int area, char answer);


int main()
{  
      const float PI = 3.14159;
      char answer;
            float area,
                  length,
                  radius,
                  width,
                  height;
            int   menu;

do {
      
 displayMenu();
 cin >> menu;

switch (menu) {

// I assume this is a square which is a 4 sided figure with equal length sides. 
case 1 :
       findSquareArea( length, area, answer);
       break;

case 2 :
      findCircleArea( radius, PI, area, answer);
      break;

case 3:      
       findTriangleArea( length, height, area, answer);
      break;

case 4:
      cout << " \n You picked quit";
      break;

default:
      cout << "\n This is not a valid input please try again.";
   break; }

}

while (answer == 'Y' || answer == 'y');


      
   return 0;
}


void displayMenu()
{
int menu;
cout << "Choose a menu option by entering a number. 4 will quit the program. \n\n";
   cout << "1 square \n" << "2 circle \n" << "3 right triangle \n" <<  "4 quit \n" ;
   
}
void findSquareArea(int length,int area,int answer)
{

cout << "\n You picked square. Please write the length of the square. \n";
      cin >> length;
      area  = length * length;
      cout <<  "\n Your Suqare of length: " << length << " The area of your square is: " << area << endl ;
      cout << "Do you want to pick again? Y/N ";
      cin >> answer;

}
void findCircleArea(int radius,const float PI,int area,char answer)
{

 cout << "\n You picked circle. Please write the radius of the circle.\n";
      cin >> radius; 
      area =  PI * ( radius * radius);
      cout << "\n Your circle of raidius: " << radius << " The area of your circle is: " << area << endl ;
      cout << "Do you want to pick again? Y/N ";
      cin >> answer;

}
void findTriangleArea(int length,int height,int area, char answer)
{

cout << "\n You picked right triangle. Please write the length base and height with a space between base and height. \n";
      cin >> length >> height;
      area = (length * height) / 2;
      cout << "\n Your right triangle of length: " << length << " and height: " << height << 
      " The area for your right trinagle is: " << area << endl;
      cout << "Do you want to pick again? Y/N ";
      cin >> answer;

}
