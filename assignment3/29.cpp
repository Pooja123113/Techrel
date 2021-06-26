/*29. Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1*/
#include<iostream>
using namespace std;
int main()
{
    int dividend,divisor,quotient,remainder;
    cout<<"enter the dividend:";
    cin>>dividend;
    cout<<"enter the devisor:";
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<"the quotient of quotient:  "<< quotient;
     cout<<" \nthe quotient of the remainder:  "<< remainder;

    return 0;


}
