#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(int n)
{
  int res = 0, m = n;
  while (n)
  {
    res = res * 10 + n % 10;
    n /= 10;
  }
  if (res == m)
    return 1;
  return 0;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (check(n))
      cout << "yes";
    else
      cout << "no";
  }
}