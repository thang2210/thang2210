
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int sieve()
{
  for (int i = 0; i <= 1000000; i++)
    prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 1000; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= 1000000; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}
int cnst(int n)
{
  while (n)
  {
    int r = n % 10;
    if (!(r == 2 || r == 3 || r == 5 || r == 7))
      return 0;
  }
  return 1;
}
int main()
{
  sieve();
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
      if (prime[i] && cnst(i))
      {
        cout << i << " ";
      }
    }
  }
}