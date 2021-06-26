/*20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95 */
#include<iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    cout<<"enter temperature in celcious:"<<endl;
    cin>>celsius;
    fahrenheit=(celsius*9)/5+32;
    cout<<"  temperature in fahrenheit  "<<   fahrenheit;
    return 0;


}
