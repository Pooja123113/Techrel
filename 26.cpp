/*26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300 */
#include<iostream>
using namespace std;
int main()
{
    float kelvin,fahrenheit;
    cout<<"enter temperature in fahrenheit:";
    cin>>fahrenheit;
    kelvin=((fahrenheit-32)/1.8)+273.15;
    cout<<" temperature in kelvin:  "<<   kelvin;
    return 0;


}





