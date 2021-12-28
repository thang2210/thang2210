#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int gdc(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gdc(b, a % b);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
      for (int j = i; j <= b; j++)
      {
        if (gdc(i, j) == 1)
        {
          cout << i << " - " << j;
        }
      }
    }
  }
  return 0;
}