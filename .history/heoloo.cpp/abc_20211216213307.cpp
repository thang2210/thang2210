#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(int n)
{
  int res;
  for (int i = 2; i <= sqrt(n); i++)
  {
    while (n % i == 0)
    {
      res = i;
      n /= i;
    }
  }
  if (n != 1)
    res = n;
  return res;
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