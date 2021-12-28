#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int pt(int n, int k)
{
  int sum = 0;
  for (inti = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i % k;
    }
  }
  return sum;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    long long k;
    cin >> n >> k;
    cout << pt(n, k);
  }
}