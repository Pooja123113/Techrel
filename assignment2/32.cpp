/*32. Write a program in C++ to check whether a number is positive, negative or zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/
#include<iostream>
using namespace std;
int main()
 {
     int x;
     cout<<"Check whether a number is positive, negative or zero :";
     cout<<"\n-----------------------------------------------------------";
     cout<<"\ninput number: ";
     cin>>x;
     if(x<0)
    {
    cout<<"\nnumber is negative"<<x;
    }
    else if(x>0)
    {
    cout<<"\nentered number is positive"<<x;
    }
    else
    {
    std::cout<<"\n entered number is zero"<<x;
    }
     return 0;

 }


