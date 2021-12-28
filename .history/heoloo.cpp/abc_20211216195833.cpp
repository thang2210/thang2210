#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  if (count == 3)
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
    int res = 0;
    for (int i = 1; i < n; i++)
    {
      if (pt(i))
      {
        res++;
      }
    }
    cout << res;
  }
}