#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n)
{
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  return count >= 3;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
      if (isPrime(i))
      {
        cout << i << " ";
      }
    }
  }
}