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
    if (gdc(a, b))
      cout << "yes";
    else
      cout << "no";
  }
  return 0;
}