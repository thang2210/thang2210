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
int chuso6(int n)
{
  while (n)
  {
    int r = n % 10;
    if (r % 10 == 6)
      return 1;
    n /= 10;
  }
  return 0;
}
int chuso8(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  if (sum % 10 == 8)
    return 1;
  return 0;
}
int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (chuso8(i) && chuso6(i) && stn(i))
    {
      cout << i;
    }
  }
}