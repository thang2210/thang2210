
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
int main()
{
  int n;
  cin >> n;
  int count = 0;
  int i = 2;
  while (count < n)
  {
    if (dem(i) == true)
    {
      count++;
      cout << i << " ";
    }
    i++;
  }
}