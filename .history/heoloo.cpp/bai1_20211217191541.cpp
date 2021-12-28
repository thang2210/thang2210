#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int sum(long long n)
{
  int ans = 0;
  while (n)
  {
    ans += n % 10;
    n /= 10;
  }
  return ans;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    cout << sum(n);
  }
}