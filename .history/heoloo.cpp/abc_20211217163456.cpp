#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(long long n)
{
  if (n < 1)
    return 0;
  int i = 1;
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
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
      if (check(i))
      {
        count++;
      }
    }
    cout << count;
  }
}