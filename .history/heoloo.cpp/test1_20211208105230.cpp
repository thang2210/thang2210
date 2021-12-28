// BAI 3
#include <iostream>
using namespace std;
int cnt(int a[1000], int n, int x)
{
  int count = 0; // dem x
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      count++;
    }
  }
  cout << "x xuat hien : " << count;
}
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
      a[i] = x;
      return 1;
    }
    return 0; // k dung tra ve trnag thai thoat
  }
}