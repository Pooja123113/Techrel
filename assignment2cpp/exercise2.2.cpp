#include<iostream>
using namespace std;
int main()
    {
    int arr[3]={10,20,30};
    cout<<"Print original array:"<<arr[3]<<endl;
    int arr1[6]={40,50,60,70,80,90};

    int fullarray=arr.append(arr1);
    cout<<fullarray;
    return 0;
    }
