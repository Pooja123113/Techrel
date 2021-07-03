 /*C++ Program for Bubble Sort
int arr[] = {'1','31','7','11','9'};
int arr[] = {'1','7','9','11','31'}; */
#include<iostream>
using namespace std;
int main()
 {
  int arr[5]={1,31,7,11,9};
  int i,j,temp;
  cout<<"before order"<<" "<<,;
  for(i=0;i<5;i++)
  {
  cout<<arr[i]<<" ";
  }
  cout<<"\nafter order"<<" ";
  for(i=0;i<5;i++)
  {
   for(j=0;j<4-i;j++)
   {
   if (arr[i]>arr[i+1] )
   {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;

   }

  }
  }
  for(i=0;i<5;i++)
  {
  cout<<arr[i]<<" ";

  }
  return 0;


 }
