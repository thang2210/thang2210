#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int pt(int x, int y, int z)
{
  int res = 1;
  for (int i = 1; i <= y; i++)
  {
    res *= x;
    res %= z;
  }
  return res;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    cout << pt(x, y, z);
  }
}