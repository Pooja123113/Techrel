
/*19. Write a program in C++ to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159 */
#include<iostream>
using namespace std;
int main()
    {
    int r;
    float area, pi=3.14,circumference;
    cout<<"input radius of circle is: ";
    cin>>r;
    area=pi*r*r;
    circumference=2*pi*r;
    cout<<"area of circle is: "<<area<<endl;
    cout<<"circumferance of circle is: "<<circumference<<endl;



    return 0;

    }
