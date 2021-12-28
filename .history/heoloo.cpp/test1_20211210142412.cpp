
// dem thua so ngyen to
#include <iostream>
#include <math.h>
using namespace std;
int pt(int n, int p)
{
  int sum = 0;
  for (int i = p; i <= n; i *= p)
  {
    sum += n / i;
  }
  return sum;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, p;
    cin >> n >> p;
    cout << pt(n, p);
  }
}