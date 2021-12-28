#include <iostream>
// so phe nic
#include <math.h>
using namespace std;
int pt(int n)
{
  int res = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    int count == 0;
    while (n % i == 0)
    {
      count++;
      n /= i;
    }
    if (count >= 2)
      return 0;
    if (count == 1)
      res++;
  }
  if (n != 1)
    res++;
  return res == 3;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << pr(n);
  }
}