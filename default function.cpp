#include<iostream>
#include<string>
using namespace std;
void myfunction(string state="maharastra")
{
 cout<<state<<endl;

}
void hello(string country="india")
{
 cout<<country<<endl;

}

int main()
{
    myfunction("rajsthan");
    myfunction("gujrat");
    myfunction();
    hello();
    hello();
    return 0;
}
