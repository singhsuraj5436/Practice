#include<iostream>
using namespace std;
int main()
{
    int x;
    double y;
    double z;

    cout<<5/2<<endl;
    cout<<5.0/2.0<<endl;
    cout<<5.0/2<<endl;

    x=5/2;
    y=(double)5/(double)2;     //type cast
    cout<<x<<" and "<<y<<endl;

    z=5/2;
    cout<<z;

    return 0;
}