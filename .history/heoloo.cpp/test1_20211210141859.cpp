
// dem thua so ngyen to
#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
  int count = 0;
  for (int i = 2; i <= n; i++)
  {

    while (n % i == 0)
    {
      count++;
      n /= i;
    }
  }
  if (n != 1)
    count++;
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << pt(n);
  }
}