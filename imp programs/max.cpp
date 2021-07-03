/*9) C++ program to find largest element in an array
int arr[] = {'1','3','7'};
 max=arr[0]
 arr[1]> max  ==>max = arr[1] */
 #include<iostream>
 using namespace std;
 int main()
 {
  int arr[5]={1,3,7,2,8};
  int max=arr[0];


  for ( int i=1; i<5; i++)
    {
  if(arr[i]>max)
        {
    max=arr[i];
        }
  cout<<max<<endl;
  }
  return 0;
 }
