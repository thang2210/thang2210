
//

// kiem tra so nguyen to
//
// dem thua so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
      while (n % i == 0)
      {
        n /= i;
      }
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