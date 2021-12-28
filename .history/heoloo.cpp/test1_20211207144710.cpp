#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (auto &x : a)
    cin >> x;
  // -> dem va in ra phan tu chan
  int count1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      cout << i << " ";
      count++;
    }
  }
  cout << "dem : " << count;
  return 0;
}