#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int snt(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}
int isTang(int n)
{
  while (n >= 0)
  {
    int r = n % 10;
    if (r <= (r / 10) % 10)) return 0;
    n /= i;
  }
  return 1;
}
int isGiam(int n)
{
  while (n <= 0)
  {
    int r = n % 10;
    if (r >= (r / 10) % 10)
      return 0;
    n /= i;
  }
  return 1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    for (int i = pow(10, n - 1); i <= pow(10, n); i++)
    {
      if ((isTang(i) || isGiam(i)) && snt(i))
      {
        cout << i;
      }
    }
  }
}