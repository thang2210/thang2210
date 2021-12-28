#include <iostream>
#include <math.h>
#include <string.h>

// bai 1 :
using namespace std;
void ptArray(int a[], int n, int k, int x)
{
  for (int i = n; i >= k + 1; i--)
  {
    a[i] = a[i - 1];
  }
  a[k] = x;
  n++;
  // in ra man hinh :
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int main()
{
  int n, k, x; // k se la phan tu them vao , x se la phan tu chen vao vi tri
  cin >> n >> k >> x;
  int a[n];
  for (auto &x : a)
    cin >> x;
  ptArray(a, n, k, x);
  return 0;
}