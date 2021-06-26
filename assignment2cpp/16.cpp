/*16. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32 */
#include<iostream>
using namespace std;
int main()
    {
    float r,h;
    float v, pi=3.14;
    cout<<"input radius of cylinder is: ";
    cin>>r;
    cout<<"input height of cylindr is: ";
    cin>>h;
    v=pi*r*r*h;
    cout<<"volume of cylinder is: "<<v;

    return 0;

    }

