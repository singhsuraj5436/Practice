#include<iostream>
using namespace std;
const double PI=3.1415;      //You can also always define your own value of pi and use it in a program.
                            //C++ Literals (The value which is assigned to the constant variable )
int main()
{
    double r, area;

    cout<<"Enter the redius of circle:";
    cin>>r;
    
    area= PI *r*r;
    cout<<"area of the circle is:"<<area;

    return 0;
}