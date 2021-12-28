#include <iostream>
#include <set>
#include <map>
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
/*int main()
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
    int dem = 1, res = 0, cnt = 0, b[n];
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
} */

// bai 10 : Bài 10. Cặp số bằng nhau
/*int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for (auto &x : a)
      cin >> x;
    for (int i = 1; i < n; i++)
    {
      if (a[i] == a[i + 1])
        count++;
    }
    cout << count;
  }
} */

// bai 11 :  Các số xuất hiện trong mảng
/*int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i =0 ;i <n ;i++){
    int ok =1;
    for (int j =0 ;j < i ; j++){
      if (a[i] == a[j]) {
        ok =0;
        break;
      }
    }
    if (ok) cout << a[i];
  }
} */

// bai 12 : tan suat lon 1
/*int cnt[100000];
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    cnt[a[i]]++;
  }
  int dem = 0, res;
  for (int i = 0; i < n; i++)
  {
    if (cnt[a[i]] > dem)
    {
      dem = cnt[a[i]];
      res = a[i];
    }
    else if (cnt[a[i]] == dem)
    {
      if (res > a[i])
        res = a[i];
    }
  }
  cout << res << "-" << cnt;
} */
// bai 13 : . Tần suất lớn nhất
/*int main()
{
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    b[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    b[a[i]] += 1;
  }
  for (int i = 0; i < n; i++)
  {
    if (b[i] > 0)
    {
      cout << i << "- " << b[i] << " , ";
    }
  }
} */

// bai 15 : Liệt kê các số chỉ xuất hiện một lần trong mảng
/*int cnt[100000] = {0};
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    cnt[a[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (cnt[a[i]] == 1)
      cout << a[i];
  }
} */

// bai 16 :
/*int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int q;
  cin >> q;
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
      sum += a[i];
    }
    cout << sum << endl;
  }
} */

// bai 17 : Kadane Algo
/*long long max(long long a, long long b)
{
  return a < b ? b : a;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  long long sum1 = 0, sum2 = 0;
  for (int i = 0; i < n; i++)
  {
    sum1 += a[i];
    sum2 = max(sum1, sum2);
    if (sum1 < 0)
      sum1 = 0;
  }
  cout << sum2;
} */

// bai 18 : Bài 18. Sliding Window
/*long long max(long long a, long long b)
{
  return a < b ? b : a;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  long long sum1 = 0, sum2 = -1e18;
  for (int i = 0; i < n; i++)
  {
    sum1 += a[i];
    sum2 = max(sum1, sum2);
    if (sum1 < 0)
      sum1 = 0;
  }
  cout << sum2;
} */

//  Bài 19. Số lặp đầu tiên
/*int cnt[1000000] = {0};
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int ok = 0;
  for (int i = 0; i < n; i++)
  {
    if (cnt[a[i]] == 1)
    {
      cout << a[i];
      ok = 1;
    }
    cnt[a[i]] = 1;
  }
  if (!ok)
    cout << -1;
} */

// bai 20 : tron 2 day
/*int a[100001], b[100001], c[100001];
int main()
{
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }
  int size = 0; // lưu số lượng phần tử của dãy c
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (a[i] < b[j])
    {
      c[size] = a[i];
      size = size + 1;
      i = i + 1;
    }
    else
    {
      c[size] = b[j];
      size = size + 1;
      j = j + 1;
    }
  }
  while (i < n)
  {
    c[size] = a[i];
    size = size + 1;
    i = i + 1;
  }
  while (j < m)
  {
    c[size] = b[j];
    size = size + 1;
    j = j + 1;
  }
  for (int i = 0; i < size; i++)
  {
    cout << c[i] << " ";
  }
  return 0;
} */

// Tìm hợp và giao của 2 mảng 1
int min(int a, int b)
{
  return a < b ? a : b;
}
int main()
{
  int n, m;
  cin >> n;
  int a[n], b[m];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  int giao[min(n + m)], hop[n + m];
  int i = 0, j = 0, h = 0, g = 0;
  while (i < n && j < m)
  {
    if (a[i] == b[j])
    {
      hop[h] = a[i];
      giao[g] = a[i];
      i++;
      j++ : g++;
      h++;
    }
    else if (a[i] > b[j])
    {
      hop[h++] = b[j++];
    }
    else
    {
      hop[h++] = a[i++];
    }
  }
  while (i < n)
  {
    hop[h++] = a[i++];
  }
  while (j < m)
  {
    hop[h++] = b[j++];
  }
  for (int i = 0; i < h; i++)
    cout << hop[i] << endl;
  for (int i = 0; i < g; i++)
    cout << giao[i];
}