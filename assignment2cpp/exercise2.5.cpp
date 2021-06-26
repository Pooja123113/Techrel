/*15. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125 */
#include<iostream>
using namespace std;
int main()
    {
    int a,v;

    cout<<"enter side of cube is: ";
    cin>>a;
    v=a*a*a;
    cout<<"volume of cube is: "<<v;

    return 0;

    }
