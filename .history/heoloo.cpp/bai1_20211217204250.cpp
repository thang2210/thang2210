#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

void pts(int n)
{
  int ch = 0, le = 0;
  while (n)
  {
    int r = n % 10;
    if (r % 2 == 0)
      ch++;
    else
      le++;
    n /= 10;
  }
  cout << ch << " - " << le << endl;
}
int main()
{
  int n;
  cin >> n;
  pts(n);
  return 0;
}