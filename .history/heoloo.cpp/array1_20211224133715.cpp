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

// bai 4 :
int tach(int n)
{
  int s1 = 0, s9 = 0;
  while (n)
  {
    int r = n % 10;
    if (r == 1)
      s1++;
    else if (r == 9)
      s9++;
    n /= 10;
  }
  return s1 && s9;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  int ok = 0;
  for (int i = 0; i < n; i++)
  {
    if (tach(i))
    {

      cout << a[i];
      ok = 1;
    }
  }
  if (!ok)
    cout << "01";
}