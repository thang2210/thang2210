#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int sieve()
{
  for (int i = 0; i <= 1000000; i++)
  {
    prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
      if (prime[i])
      {
        for (int j = i * i; j <= 1000000; j += i)
        {
          prime[j];
        }
      }
    }
  }
}
int main()
{
  sieve();
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> t;
    for (int i = 1; i <= n; i++)
    {
      cout << prime[i];
    }
  }
  return 0;
}