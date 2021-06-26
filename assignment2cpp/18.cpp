/*18. Write a program in C++ to find the area of any triangle using Heron's Formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253 */
#include<iostream>
#include<cmath>
using namespace std;
int main()
    {
    float l1,l2,l3,area,s,v;

    cout<<"Input the length of 1st side of the triangle ";
    cin>>l1;
    cout<<"Input the length of 2nd side of the triangle ";
    cin>>l2;
    cout<<"Input the length of 3rd side of the triangle ";
    cin>>l3;
    s=(l1+l2+l3)*0.5;

    v=(s*(s-l1)*(s-l2)*(s-l3));
    cout<<"area of triangle is: "<<sqrt(v);
    return 0;

    }
