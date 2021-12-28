
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int dcd(int a, int b)
{
  if (b == 0)

    return a;

  return dcd(b, a % b);
}
int main()
{
  int a, b;
  cin >> a >> b;
  for (int i = a; i < b; i++)
  {
    for (int j = i + 1; j <= b; j++)
    {
      if (dcd(i, j) == 1)
      {
        cout << i << " - " << j << endl;
      }
    }
  }
}