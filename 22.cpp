/*22. Write a program in C++ to find the third angle of a triangle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90*/
#include<iostream>
using namespace std;
int main()
    {
     int a,b,c;
    cout<<"the 1st angle of the triangle: ";
    cin>>a;
    cout<<"the 2nd angle of the triangle: ";
    cin>>b;
    c=180-(a+b);
    cout<<"the 3rd angle of triangle:   "<<c;
    return 0;

    }
