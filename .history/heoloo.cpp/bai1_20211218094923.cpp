#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int uoc(int n, int p)
{
  int ans = 0;
  for (int i = p; i <= n; i *= p)
  {
    ans += n / i;
  }
  return ans;
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
int deree(int n)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (nt(i))
    {
      count *= (uoc(n, i) + 1);
    }
  }
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << deree(n);
  }
}