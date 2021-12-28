// BAI 4 :
#include <iostream>
using namespace std;
// -> kiem tra ham xem no tnag hay giam

int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  bool kt1 = true; // kiem tra tnag
  bool kt2 = true; // kiem tra giam
  for (int i = 1; i < n; i++)
  {
    if (a[i] <= a[i - 1])
      kt1 = false;
    if (a[i] >= a[i - 1])
      kt2 = false;
  }
  if (kt1 || kt2)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
