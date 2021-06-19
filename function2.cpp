#include<iostream>
using namespace std;
void hello(int x,int y)
{
 cout<<"\n substraction:"<< x-y;
 cout<<"\n diviion:"<< x/y;
 cout<<"\n multiplication:"<< x*y;
 cout<<"\n ********"<<endl;

}
int main()
{
    int a=30,b=10;
    cout<<"addition:"<< a+b;
    hello(9,3);
    hello(9,3);
    return 0;

}
