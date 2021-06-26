/*30. Write a program in C++ to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25 */
#include<iostream>
using namespace std;

int main()
    {
     float a,b,c,d,total,average;
    cout<<"the enter first two number: ";
    cin>>a>>b;
    cout<<"the enter last two number:";
    cin>>c>>d;

    total=a+b+c+d;
    average=(a+b+c+d)/4;
    cout<<" \naTotal of four number is :   "<<total;
    cout<<" \naaverage of four number is :   "<<average;

    return 0;

    }



