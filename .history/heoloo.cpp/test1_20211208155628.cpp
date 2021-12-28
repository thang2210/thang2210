
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if (n < 2)
  {
    cout << "loai:";
  }
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  if (count == 0)
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
  return 0;
}
