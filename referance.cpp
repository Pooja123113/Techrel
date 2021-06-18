#include<iostream>
#include<string>
using namespace std;
int main()
{
    string girl="pooja";
    string &name=girl;
    cout<<girl<<endl;
    cout<<name<<endl;

    return 0;
}
