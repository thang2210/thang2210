#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int check(long long n)
{
  int res = n;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
        n /= i;
      res -= res / i;
    }
    if (n != 1)
      res -= res / n;
  }
  return res;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    cout << check(n);
  }
}