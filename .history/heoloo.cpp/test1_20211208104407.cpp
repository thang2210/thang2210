// BAI 3
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int x;
  cin >> x; // kiem tra xem no co xuat hien hay khong?
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
      cout << "yes";
    break;
    else cout << "NO";
    break;
  }
  return 0;
}