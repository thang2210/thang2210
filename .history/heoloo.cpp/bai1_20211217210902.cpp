#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int stn(int n)
{
  int res = 0, m = n;
  while (n)
  {
    res = res * 10 + n % 10;
    n /= 10;
  }
  return res == m;
}
int khong9(int n)
{
  while (n)
  {
    int r = n % 10;
    if (r % 10 == 9)
      return 0;
    n /= 10;
  }
  return 1;
}
int main()
{
  int n
          cin >>
      n;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (stn(i) && khong9(i))
    {
      cout << i << " ";
      count++;
    }
  }
  cout << count;
}