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
int min(int a, int b)
{
  return a < b ? a : b;
}
int max(int a, int b)
{
  return a > b ? a : b;
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
      cout << a[n - 1] - a[n - 2] << "- " << a[n - 1] - a[0] << endl;
    else
      cout << min(a[i] - a[0], a[i + 1] - a[i]) << "- " << max(a[i] - [0], a[n - 1] - a[i]) << endl;
  }
  return 0;
}