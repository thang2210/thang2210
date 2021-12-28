#include <iostream>
#include <math.h>
/ BAI 5 : SO NGUYEN TO VA CHU SO NGUYEN TO

          void
          sieve()
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
int isPrime(int n)
{
  while (n)
  {
    int r = n % 10;
    if (!(r == 2 || r == 3 || r == 5 || r == 7))
      return 0;
    n /= 10;
  }
  return 1;
}
int main()
{
  int t;
  cin >> t;
  sieve();
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
      if (prime[i] && isPrime(i))
        count++;
    }
    cout << count;
  }
}