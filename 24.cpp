/*24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33 */
#include<iostream>
using namespace std;
int main()
    {
     float k,f;
    cout<<"the temperature in Kelvin: ";
    cin>>k;

     f =(k-273.15)*(1.8)+32 ;
    cout<<"\n The temperature in fahrenheit: "<<f;
    return 0;

    }

