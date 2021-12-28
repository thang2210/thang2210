#include <iostream>
#include <math.h>
using namespace std;

int check(int n)
{
  int count = 0;
  for (int i = 0; i <= sqrt(n); i++)
  {
    int res = 0;
    while (n % i == 0)
    {
      res++;
      n /= i;
    }
    if (res >= 2)
      return 0;
    if (res == 1)
      count++;
  }
  if (n != 1)
    count++;
  return count == 3;
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