#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
#include <iostream>
using namespace std;
int pt(long long n)
{
  int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
  while (n)
  {
    int r = n % 10;
    if (r == 2)
      c2++;
    else if (r == 3)
      c3++;
    else if (r == 5)
      c5++;
    else if (r == 7)
      c7++;
    n /= 10;
  }
  if (c2 != 0)
    cout << "2 - " << c2 << endl;
  if (c3 != 0)
    cout << "3 - " << c3 << endl;
  if (c5 != 0)
    cout << "5 - " << c5 << endl;
  if (c7 != 0)
    cout << "7 - " << c7 << endl;
}
int main()
{
  long long n;
  cin >> n;
  pt(n);
}