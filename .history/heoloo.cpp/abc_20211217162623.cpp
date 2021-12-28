#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(int n)
{
  int res = 0;
  while (n)
  {
    res = res * 10 + n % 10;
    n /= 10;
  }
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
    if (check(n))
      cout << "yes";
    else
      cout << "no";
  }
}