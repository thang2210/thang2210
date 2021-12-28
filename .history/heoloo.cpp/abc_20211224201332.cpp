#include <iostream>
using namespace std;
int pt(int a[], int n)
{
  int c25 = 0, c50 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == c25)
      c25++;
    else if (a[i] == c50)
    {
      if (c25 == 0)
        return 0;
      c25--;
      c50++;
    }
    else
    {
      if (c25 == 0 || (c25 * 25 + c50 * 50 < 75))
        return 0;
      if (c50 != 0)
      {
        c25--;
        c50--;
      }
      else
      {
        c25 -= 3;
      }
    }
  }
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  if (pt(a, n))
    cout << "yes";
  else
    cout << "no";
}