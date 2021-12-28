#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void pt(int n)
{
  itn s2 = 0, s3 = 0, s5 = 0, s7 = 0;
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
  if (s2 != 0)
    cout << "2- " << s2 << endl;
  if (s3 != 0)
    cout << "3 - " << s3 << endl;
  if (s5 != 0)
    cout << "5 - " << s5 << endl;
  if (s7 != 0)
    cout << "7 - " << s7 << endl;
}
int main()
{
  long long n;
  cin >> n;
  pt(n);
}