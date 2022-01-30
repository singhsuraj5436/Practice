#include<iostream>
using namespace std;
int main()
{
    bool b;
    int x;

    b=true;                //atomic boolean expression      (the bool literals: true,false) (>,<,<=,>=,==,!=)
    b=(true&&!b);           //compound boolean expression    (combined with boolean operators !,&&,||)
    cout<<b<<endl;

    x=3;
    b=(x>5);                //atomic boolean expression     (the bool literals: true,false) (>,<,<=,>=,==,!=)
    cout<<b<<endl;

    b=(x>=0)&&(x<5);        //compound boolean expression    (combined with boolean operators !,&&,||)
    cout<<b<<endl;

    return 0;
}