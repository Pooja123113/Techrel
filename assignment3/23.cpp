/*23. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.*/
#include<iostream>
using namespace std;
int main()
    {
     float d,c;
    cout<<"the distance in kilometer: ";
    cin>>d;
    c=d*0.6214;
    cout<<"the 25 km./.hr means: "<<c<<"miles";
    return 0;

    }
