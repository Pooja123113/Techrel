
/*17. Write a program in C++ to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50 */
#include<iostream>
using namespace std;
int main()
    {
    float width,length;
    float area, perimeter;
    cout<<"input width  of rectangle is: ";
    cin>>width;
    cout<<"input length of rectangle is: ";
    cin>>length;
    area=length*width;
    cout<<"area of rectangle is: "<<area;
    perimeter=2*length+2*width;
    cout<<"\n perimeter of rectangle is: "<<perimeter;


    return 0;

    }

