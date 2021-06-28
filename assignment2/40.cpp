/*40. Write a program in C++ to print the area and perimeter of a rectangle.
Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2 8*/
#include<iostream>
using namespace std;
int main()
    {
     float w,h,area,perimeter;
     cout<<"Input the width of the rectangle: ";
     cin>>w;
     cout<<"Input the height of the rectangle: ";
     cin>>h;
     area=w*h;

     cout<<"The area of the rectangle is: "<<area<<endl;
     perimeter=2*(w+h);
     cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;
     return 0;

    }
