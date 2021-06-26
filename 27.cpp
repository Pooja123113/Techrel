/*27. Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300 */
#include<iostream>
using namespace std;
int main()
{
    float celsius,kelvin;
    cout<<"enter temperature in celcious:";
    cin>>celsius;
    kelvin=celsius+273.15;
    cout<<"  temperature in kelvin  "<<   kelvin;
    return 0;


}
