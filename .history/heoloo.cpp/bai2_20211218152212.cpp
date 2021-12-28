#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int korean(int a, int b)
{
  int r = a % b;
  if (b == 0)
    return 0;
  return b - r;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    cout << korean(a, b);
  }
}