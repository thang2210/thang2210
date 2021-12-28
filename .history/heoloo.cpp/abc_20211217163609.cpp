#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(long long n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }
  return sum;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << check(n);
  }
}