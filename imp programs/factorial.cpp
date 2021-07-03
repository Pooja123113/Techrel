/*) find factorial
   num =5
   5*4
   20*3
   60*2
   120*1 */
   #include<iostream>
   using namespace std;
   int main()
   {
   int num,fact=1;
   cout<<"enter the number";
   cin>>num;
   for(int i=num;i>=1;i--)
   {
   fact=fact*i;
   }
   cout<<"factorial of number is: "<<fact;
   return 0;

   }
