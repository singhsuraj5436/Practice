#define _USE_MATH_DEFINES   //Here, _USE_MATH_DEFINES is a #define macro. Later in the program, 
                            //we use M_PI to access the value of PI. In C++, the value of M_PI is 3.14159265358979323846.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double r, area;

    cout<<"Enter the redius of circle:";
    cin>>r;
    
    area= M_PI * (r*r);
    cout<<"area of the circle is:"<<area;

    return 0;
}