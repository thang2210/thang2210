#include <iostream>
using namespace std;
int prime[1000001];
void sieve()
{
  for (int i = 0; i <= 1000000; i++)
  {
    prime[i] = 1;
    prime[0] = prime[1] = 1;
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
}
int main()
{
  sieve();
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (prime[i])
    {
      cout << i << " ";
    }
  }
}