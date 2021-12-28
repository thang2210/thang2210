#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(long long n)
{
  int sum = 1;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      if (i != n / i)
        sum += i + n / i;
      else
        sum += i;
    }
  }
  if (sum == n)
    return 1;
  else
    return 0;
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