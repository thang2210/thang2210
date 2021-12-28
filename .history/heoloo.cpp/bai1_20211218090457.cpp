#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pt(long long n)
{
  int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
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
    cout << "2 - " << s2 << endl;
  else if (s3 != 0)
    cout << "3 - " << s3 << endl;
  else if (s5 != 0)
    cout << "5 - " << s5 << endl;
  else if (s7 != 0)
    cout << "7 - " << s7;
}
int main()
{
  long long n;
  cin >> n;
  cout << pt(n);
}