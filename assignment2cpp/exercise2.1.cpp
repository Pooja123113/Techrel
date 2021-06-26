#include<iostream>
using namespace std;
void fun1(int x,int y)
    {
      cout <<"Result of first expression is: "<< x+y<<endl;
    }
    void fun2(int x,int y)
    {
      cout <<"Result of second expression is: "<< x-y<<endl;
    }
    void fun3(int x,int y)
    {
      cout <<"Result of third expression is: "<< x*y<<endl;
    }
    void fun4(int x,int y)
    {
      cout <<"Result of 4 th expression is: "<< x%y<<endl;
    }
int main()
    {
    fun1(11,12);
    fun2(10,5);
    fun3(4,3);
    fun4(18,5);
    return 0;
    }
