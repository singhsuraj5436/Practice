#include<iostream>
using namespace std;
int main()
{
    char lowerCaseLetter, upperCaseLetter;
    int extra;

    cout<<"Please enter the lowercase letter:";
    cin>>lowerCaseLetter;

    extra=(int)lowerCaseLetter-'a';
    cout<<extra<<endl;
    upperCaseLetter=(char)'A'+extra;

    cout<<"Uppercase of the letter "<<lowerCaseLetter<<" is:"<<upperCaseLetter;

    return 0;
}