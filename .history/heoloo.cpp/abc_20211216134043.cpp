#include <iostream>
#include <math.h>
using namespace std;
bool kiem_tra(int n)
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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> t;
    if (kiem_tra(n) == true)
      cout << "yes";
    else
      cout << "no";
  }
}