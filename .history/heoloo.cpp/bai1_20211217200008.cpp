#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int snt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}

int fibo(int n)
{
  if (n == 0 || n == 1)
    return 1;
  long long s1 = 0, s2 = 1, s3;
  for (int i = 3; i <= 93; i++)
  {
    s3 = s2 + s1;
    if (s3 == n)
      return 1;
    s1 = s2;
    s2 = s3;
  }
  return 0;
}
int sum(int n)
{
  int ans = 0;
  while (n)
  {
    ans += n % 10;
    n /= 10;
  }
  return fibo(ans);
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
      if (sum(i) && snt(i))
      {
        cout << i << " ";
      }
    }
  }
}