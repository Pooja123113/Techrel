/*8) C++ Program to find sum of elements in a given array
int arr[] = {'1','3','7'};
1+3+7 = 11 */
#include<iostream>
using namespace std;
int main()
    {
    int i,n,sum=0;
    int arr[4]={1,3,7};
    n=3;
    for(i=0;i<n;i++)
    {
    sum+=arr[i];

    }
    cout<<sum;
    return 0;

    }
