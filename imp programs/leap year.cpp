/*5) check leap year
 leap :  leap year/4
           leap year/100
		     leap year/400 */


#include<iostream>
using namespace std;
int main()
    {
      int year;
      cout<<"enter the year";
      cin>>year;
      if(year%400==0 || year%100==0 && year%4)
      {
      cout<<"this year is leap year";
      }
      else
      {
          cout<<"this year is leap year";
      }

      return 0;
    }


