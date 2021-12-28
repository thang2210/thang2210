#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int res = 0;
  int cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i + 1])
    {
      count++;
    }
    else
    {
      cnt = 1;
    }
    res = max(res, cnt);
  }
  cout << res;
}