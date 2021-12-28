#include <iostream>

// bai 1 :
using namespace std;
int ss(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  if (a[0] == a[1])
  {
    cout << a[0] << "- " << a[2];
  }
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  int index;
  for (auto &x : a)
    cin >> x;
  ss(a, n);
}