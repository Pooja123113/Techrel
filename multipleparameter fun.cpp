#include<iostream>
#include<string>
using namespace std;
void myfunction(string surname,int age)
{
 cout<<surname<<"  berry   " << age<<"  yeras old \n";

}

int main()
{
    myfunction("Tom",24);
    myfunction("Jerry",8);
    myfunction("Jack",12);
    return 0;
}
