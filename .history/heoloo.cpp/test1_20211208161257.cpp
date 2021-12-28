
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
bool dem(int n)
{
  bool kt = true;
  if (n < 2)
    kt = false;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      kt = false;
      break;
    }
  }
  return kt;
}
int hiem_thi(int n)
{
  for (int i = 1; i < n; i++)
  {
    if (dem(i) == true)
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int n;
  cin >> n;
  hiem_thi(n);
  return 0;
}