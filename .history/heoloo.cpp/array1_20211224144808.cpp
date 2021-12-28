#include <iostream>

// bai 1 : kiem tra mang doi xung
using namespace std;
/*int pt(int a[], int n)
{
  int l = 0, r = n - 1;
  while (l < r)
  {
    if (a[l] != a[r])
      return 0;
    l++;
    r--;
  }
  return 1;
} */

// bai 2 : kt mang tang dan hay giam dan
/*int pt(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= a[i + 1])
      return 0;
  }
  return 1;
} */

// bai 3 : Bài 3. Số không nhỏ hơn số đứng trước
/*int pt(int a[] , int n){
  int max =0;
  for (int i=0 ;i <n ;i++){
    if ( a[i] > max) cout << a[i] << " ";
    if ( a[i] > max) max = a[i];
  }
  return 0;
} */

// bai 4 : bai toan linelind
/*int max(int a, int b)
{
  return a > b ? a : b;
}
int min(int a, int b)
{
  return a < b ? a : b;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
      cout << a[1] - a[0] << " - " << a[n - 1] - a[0] << endl;
    else if (i == n - 1)
      cout << a[n - 1] - a[n - 2] << " - " << a[n - 1] - a[0] << endl;
    else
      cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " - " << max(a[i] - a[0], a[n - 1] - a[i]) << endl;
  }
  return 0;
} */

// bai 5 : Vé xem phim
int va_ban_hang(int a[], int n)
{
  int c25 = 0, c50 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 25)
      c25++;
    else if (a[i] == 50)
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
      if (c25 != 0)
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
  return 1;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  if (va_ban_hang(a, n))
    cout << "yes";
  else
    cout << "no";
}
