#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int pt(int n)
{
  if (n == 0 || n == 1)
    return 1;
  int s1 = 0, s2 = 1, s3;
  for (int i = 2; i <= n; i++)
  {
    s3 = s1 + s2;
    s3 %= (int)(1e9 + 7);
    s1 = s2;
    s2 = s3;
  }
  return s3;
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