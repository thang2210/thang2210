
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int dcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gdc(b, a & b);
}
int main()
{
  int n;
  cin >> n;
  for (int i = a; i <= b; i++)
  {
    if (dcd(i) == i)
    {
      cout << i << " - " << j << endl;
    }
  }
}