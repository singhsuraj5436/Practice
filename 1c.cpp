#include<iostream>
using namespace std;
int main()
{
    int total_no_of_days;
    int weeks, days;
    cout<<"Enter the total no. of days:";
    cin>>total_no_of_days;

    weeks =total_no_of_days / 7;
    days =total_no_of_days % 7;

    cout<<total_no_of_days<<" = "<<weeks<<" weeks and "<<days<<" days.";
    return 0;
}