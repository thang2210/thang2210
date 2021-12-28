
// dem thua so ngyen to
#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
  int count = 0;
  for (int i = 5; i <= n; i += 5)
  {
    int temp = i;
    while (temp % 5 == 0)
    {
      count++;
      temp /= 5;
    }
  }
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
