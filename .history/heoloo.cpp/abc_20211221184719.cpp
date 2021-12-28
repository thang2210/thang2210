#include <iostream>
#include <math.h>
#include <string.h>

// bai 1 :
using namespace std;
void ptArray(int a[], int n, int k)
{
  for (int i = k; i < n; i++)
  {
    a[i] = a[i + 1];
  }
  n--;
  // in ra man hinh :
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int main()
{
  int n, k; // k se la phan tu them vao , x se la phan tu chen vao vi tri
  cin >> n >> k;
  int a[n];
  for (auto &x : a)
    cin >> x;
  ptArray(a, n, k);
  return 0;
}