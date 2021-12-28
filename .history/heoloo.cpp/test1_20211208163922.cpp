
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int demuoc(int n)
{
  int count = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  if (count == 3)
    return 1;
  return 0;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
      if (demuoc(i))
      {
        cout << i << " ";
      }
    }
  }
}