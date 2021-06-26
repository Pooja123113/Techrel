/* 28. Write a program in C++ to find the area of Scalene Triangle.
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793 */
#include<iostream>
#include<cmath>
#define PI 3.14159
using namespace std;

int main()
    {
     float a,b,x,area;
    cout<<"the length of a side of the triangle: ";
    cin>>a;
    cout<<"the length of another side of the triangle:";
    cin>>b;
    cout<<"angle between these side of the triangle:";
    cin>>x;

    area=(a*b*sin(PI/180)*x)/2;
    cout<<" \narea of the Scalene Triangle is :   "<<area;
    return 0;

    }


