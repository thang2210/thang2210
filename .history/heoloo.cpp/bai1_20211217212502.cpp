#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pt(int n, int k)
{
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
        count++;
      n /= i;
      if (count == k)
        return i;
    }
  }
  if (n != 1)
    return 0;
  if (count == k)
    return n;
  return -1;
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