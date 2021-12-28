#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int pt(char s[100])
{
  int dau = s[0] - '0', cuoi = s[strlen(s) - 1] - '0';
  if (!(dau == 2 * cuoi || cuoi == 2 * dau))
    return 0;
  int l = 1, r = strlen(s) - 2;
  while (l < r)
  {
    if (s[l] != s[r])
      return 0;
    l++;
    r--;
  }
  return 1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char s[100];
    cin >> s;
    if (pt(s))
      cout << "yse";
    else
      cout << "no";
  }
}