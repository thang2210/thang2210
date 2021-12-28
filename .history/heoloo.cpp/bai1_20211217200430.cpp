#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int stn(int n)
{
  int res = 0;
  while (n)
  {
    res = res * 10 + n % 10;
    n /= 10;
  }
  return res;
}

int nt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}

int uoc(int n)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0 && nt(i))
    {
      count++;
    }
  }
  if (count == 3)
    return 1;
  return 0;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
      if (stn(i) && uoc(i))
      {
        cout << i << " ";
      }
    }
  }
}