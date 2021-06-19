#include<iostream>
using namespace std;
void even(int a)
{
    if(a%2==0)
    {
        cout<<a<<" is even number:"<<endl;
    }
    else {
        cout<<a<<" is odd number:"<<endl;
    }


}
int main()
{
 even(4);
 even(1);
 even(68);
 even(21);
 even(33);
 return 0;
}
