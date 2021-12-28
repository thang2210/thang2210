#include <iostream>
#include <math.h>
using namespace std;

int check(int n)
{
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
      while (n % i == 0)
        n /= i;
    }
  }
  if (n != 1)
    count++;
  return count;
}
int main()
{
  sieve();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << check(n);
  }
}