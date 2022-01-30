#include<iostream>
using namespace std;
int main()
{
    bool b1, b2, b3;             // for not ! for AND && for OR ||
    b1=true;
    b2=false;
    b3=!b2;
    cout<<b1<<" "<<b2<<" "<<b3<<endl;
    
    b3=b1&&!b2;
    cout<<b1<<" "<<b2<<" "<<b3<<endl;

    b2=!b2;
    b3=b1||b2;
    cout<<b1<<" "<<b2<<" "<<b3<<endl;

    b3=b1&&(!b2||true);
    cout<<b1<<" "<<b2<<" "<<b3;

    return 0;
}