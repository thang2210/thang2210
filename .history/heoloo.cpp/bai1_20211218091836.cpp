#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int stn(int n)
{
  int res = 0;
  while (n)
  {
    res = res * 10 + n % 10;
    n /= 10;
  }
  return res;
}
int pt(long long n)
{
  int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
  int m = stn(n);
  while (n)
  {
    int r = n % 10;
    if (r == 2)
      s2++;
    else if (r == 3)
      s3++;
    else if (r == 5)
      s5++;
    else if (r == 7)
      s7++;
    n /= 10;
  }
  while (m)
  {
    int r = m % 10;
    if (r == 2 && s2 != 0)
      cout << "2 -" << endl;
    s2 = 0;
    if (r == 3 && s3 != 0)
      cout << "3 - " << endl;
    s3 = 0;
    if (r == 5 && s5 != 0)
      cout << "5 - " << endl;
    s5 = 0;
    if (r == 7 && s7 != 0)
      cout << "7 - " << endl;
    s7 = 0;
    m /= 10;
  }
}
int main()
{
  long long n;
  cin >> n;
  cout << pt(n);
}