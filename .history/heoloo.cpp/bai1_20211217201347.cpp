#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int pt(int n)
{
  int chan = 0, le = 0;
  while (n)
  {
    int r = n % 10;
    if (r % 2 == 0)
      chan++;
    else
      le++;
  }
  cout << chan << " - " << le;
}
int main()
{
  int n;
  cin >> n;
  cout << pt(n);
}