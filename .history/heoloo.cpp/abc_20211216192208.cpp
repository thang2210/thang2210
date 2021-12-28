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
  sieve();
  int n;
  cin >> n;
  int i = 1;
  int count = 0;
  while (count < n)
  {
    if (kiem_tra(i) == true)
    {
      cout << i << endl;
      count++;
    }
    i++;
  }
}