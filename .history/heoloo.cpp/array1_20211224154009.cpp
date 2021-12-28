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
/*int ve_ban_hang(int a[], int n)
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
      // dua cho to 1l
      if (c25 == 0 || (c25 * 25 + c50 * 50 < 75))
        return 0;
      if (c50 != 0)
      {
        --c25;
        --c50;
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
  if (ve_ban_hang(a, n))
    cout << "yes";
  else
    cout << "no";
} */

// bai 6 : cap so nguyen to cung nhau trong mang
/*int gdc(int a, int b)
{
  if (b == 0)
    return a;
  return gdc(b, a % b);
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (gdc(a[i], a[j]) == 1)
        count++;
    }
  }
  cout << count;
} */

// bai 7 : Tích lớn nhất của 2 số trong mảng
/*int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int max1 = 0, max2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if (a[i] > max2)
    {
      max2 = a[i];
    }
  }
  cout << max1 * max2;
} */

// bai 8 : day con lien tiep
/*int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int res = 0, cnt = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] * a[i - 1] < 0)
    {
      cnt++;
    }
    else
    {
      cnt = 1;
    }
    res = max(res, cnt);
  }
  cout << res;
} */

// bai 9 : day tang
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
      cin >> x;
    int res = 0, cnt = 0, dem = 1, b[n];
    for (int i = 0; i < n; i++)
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
        cout << a[b[i] + j] << " ";
      }
    }
  }
}