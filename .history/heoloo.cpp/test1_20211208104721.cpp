// BAI 3
#include <iostream>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // kiem tra xem no co xuat hien hay khong?
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      cout << "Yes";
      break;
    }
    else
    {
      cout << "no";
      break;
    }
  }
  return 0;
}