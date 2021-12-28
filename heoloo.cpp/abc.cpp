#include <iostream>

using namespace std;
long long prime[10000001];
int sive()
{
  for (int i = 0; i <= 1000000; i++)
    prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 10000; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= 10000000; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}
int fibo(int n)
{
  if (n == 0 || n == 1)
    return 1;
  int s1 = 0, s2 = 1, s3;
  for (int i = 2; i < 93; i++)
  {
    s3 = s2 + s1;
    if (s3 == n)
      return 1;
    s1 = s2;
    s2 = s3;
  }
}
int main()
{
  sive();
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    if (fibo(i))
    {
      cout << i << " ";
    }
  }
}