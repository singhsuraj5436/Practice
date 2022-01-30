#include<iostream>
using namespace std;
int main()
{
    char c='S';
    
    cout<<c;
    cout<<'\n';
    cout<<endl;
    cout<<"abc\n";
    cout<<c<<'\t'<<'\\';      // for backslash '\\'
    cout<<'\t'<<c<<"\n";     // for tab '\t'   and for new line '\n'
    cout<<"abc"<<'\n';

    return 0;
}