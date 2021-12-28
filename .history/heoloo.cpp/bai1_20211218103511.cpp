#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int uoc(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      return i;
    }
  }
}
int check(int n, int k)
{
  for (int i = 1; i <= k; i++)
  {
    n = n + uoc(namespace);
  }
  cout << n;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    cout << check(n, k);
  }
}