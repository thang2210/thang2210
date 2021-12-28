
//

// kiem tra so nguyen to
//
#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    while (n % i == 0)
    {
      cout << i;
      n /= i;
    }
  }
  if (n != 1)
    cout << n;
}
int main()
{
  int n;
  cin >> n;
  pt(n);
  return 0;
}