// BAI 4 :
#include <iostream>
using namespace std;
// -> sap sep mang theo thu tu tang dan
int sortArray1(int a[1000], int n) // => SAP XEP TANG DAN
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (a[i] > a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  // => xuat ra man hinh
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int sortArray2(int a[1000], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i]; // sap xep giam dan
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  // => xuat ra man hinh
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sortArray1(a, n);
  sortArray2(a, n);
  return 0;
}
