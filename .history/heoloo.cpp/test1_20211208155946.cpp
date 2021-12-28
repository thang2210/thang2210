
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
  bool kt = true;
  if (n < 2)
    return false;
  for (int i = 2; i <= n; i++)
  {
    if (n & i == 0)
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
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
      if (isPrime(i) == true)
      {
        cout << i << " ";
      }
    }
  }
}