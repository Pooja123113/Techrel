/*25. Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85 */
#include<iostream>
using namespace std;
int main()
    {
     float k,c;
    cout<<"the temperature in Kelvin: ";
    cin>>k;

     c =(k-273.15) ;
    cout<<"\n The temperature in celsius: "<<c;
    return 0;

    }

