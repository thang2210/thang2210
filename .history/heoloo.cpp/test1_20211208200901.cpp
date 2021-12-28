
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int sieve()
{
  for (int i = 0; i <= 10000; i++)
    prime[i] = i;
  for (int i = 2; i <= sqrt(1000); i++)
  {
    if (prime[i] = i)
    {
      for (int j = i * i; j <= 10000; j += i)
      {
        if (prime[j] = j)
          prime[j] = i;
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
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
      if (prime[i])
      {
        cout << i << " ";
      }
    }
  }
}