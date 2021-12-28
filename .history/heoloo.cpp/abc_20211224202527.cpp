#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int dem = 1, cnt = 0, res = 0, b[n];
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[i - 1])
      dem++;
    else
      dem = 1;
    if (dem > res)
    {
      res = dem;
      b[0] = i - res + 1;
      cnt = 1;
    }
    else if (dem == res)
    {
      b[cnt] = i - res + 1;
      cnt++;
    }
  }
  cout << res << " ";
  for (int i = 0; i < cnt; i++)
  {
    for (int j = 0; j < res; j++)
    {
      cout << a[b[i] + j];
    }
    cout << endl;
  }
}