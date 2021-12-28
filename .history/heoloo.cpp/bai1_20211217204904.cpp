#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int gt(int n)
{
  int fac = 1;
  for (int i = 1; i <= n; i++)
  {
    fac *= i;
  }
  return fac;
}
int sum(int n)
{
  int ans = 0, m = n;
  while (n)
  {
    ans += gt(n % 10);
    n /= 10;
  }
  return ans == m;
}
int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    if (sum(i))
    {
      cout << i << " ";
    }
  }
}