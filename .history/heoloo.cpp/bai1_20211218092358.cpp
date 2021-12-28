#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  int tich = a * b;
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }
  cout << "uv" << a;
}