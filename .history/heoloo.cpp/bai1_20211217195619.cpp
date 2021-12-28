#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pt(long long n)
{
  if (n == 0 || n == 1)
    return 1;
  long long s1 = 0, s2 = 1, s3;
  for (int i = 3; i <= 93; i++)
  {
    s3 = s3 + s1;
    if (s3 == n)
      return 1;
    s1 = s2;
    s2 = s3;
  }
  return 0;
}
int main()
{
  long long n;
  cin >> n;
  if (pt(n))
    cout << "yes";
  else
    cout << "no";
}