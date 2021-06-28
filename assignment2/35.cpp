/*35. Write a program in C++ to compute the specified expressions and print the output.
Sample Output:
Compute the specified expressions and print the output:
------------------------------------------------------------
Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889*/
#include<iostream>
using namespace std;

int main()
    {
        float w=25.5,x=3.5,y=40.5,z=4.5,p;
        cout<<"Compute the specified expressions and print the output:";
       cout<<"\n-----------------------------------------------------";

     p=(w*x-x*x)/(y-z);
    cout<<"\nresult of expression is: "<<p;
    return 0;

    }
