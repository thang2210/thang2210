#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int so(int x, int y, int z, int n)
{
  for (int i = pow(10, n - 1); i <= pow(10, n); i++)
  {
    if (i % n == 0 && i % y == 0 && i % z == 0)
    {
      return i;
    }
  }
  return 0;
}
int main()
{
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vout << so(x, y, z, n);
}