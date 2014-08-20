#include <iostream>

using namespace std;

int main()
{
  int i,k;
  for (i=1;i<=10;i++)
  {
      for (k=1;k<i;k++)
      {
          cout<< "*";
      }
      cout << "\n";
  }
}

