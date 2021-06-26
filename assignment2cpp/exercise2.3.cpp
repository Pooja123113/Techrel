#include<iostream>
using namespace std;
int main()
    {
        int a,b;
    cout<<"Input first number: "<<endl;
    cin>>a;
    cout<<"Input second number: "<<endl;
    cin>>b;
     int c=a;
     a=b;
     b=c;
     cout<<"\nAfter swap a is:"<<a<<endl;
     cout<<"after swap b is :"<<b<<endl;

    return 0;
    }
