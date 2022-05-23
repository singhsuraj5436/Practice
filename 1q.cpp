#include <iostream>
using namespace std;

int main()
{
  int i, j;
  int k;

  cout<<"Enter the value of k: ";
  cin>>k;

  //  First Part

  for (i = k; i >= 1; i--)
  {
    for (j = k; j >= 1; j--)
    {
      if (j > i)
        cout << j << " ";
      else
        cout << i << " ";
    }
    for (j = 2; j <= k; j++)
    {
      if (j > i)
        cout << j << " ";
      else
        cout << i << " ";
    }
    cout << "\n";
  }

  //  Second Part

  for (i = 2; i <= k; i++)
  {
    for (j = k; j >= 1; j--)
    {
      if (j > i)
        cout << j << " ";
      else
        cout << i << " ";
    }
    for (j = 2; j <= k; j++)
    {
      if (j > i)
        cout << j << " ";
      else
        cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}
