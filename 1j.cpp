#include<iostream>
using namespace std;
int main()
{
    char inputchar;
    int asciivalue;

    cout<<"Please enter the input value:";
    cin>>inputchar;
    
    asciivalue=(int)inputchar;  //type casting

    cout<<"ascii value of "<<inputchar<<" is:"<<asciivalue<<endl;
    
    return 0;
}