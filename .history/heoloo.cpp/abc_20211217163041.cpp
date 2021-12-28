#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(int n)
{
  if (n < 1)
    return 0;
  int i = 1;
  int count = 0;
  while (i * i <= n)
  {
    if (i * i == n)
    {
      return 1;
    }
    i++;
  }
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