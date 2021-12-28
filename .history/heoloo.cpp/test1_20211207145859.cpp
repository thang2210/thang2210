#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[100];
  for (auto &x : a)
    cin >> x;
  // -> dem va in ra phan tu chan
  int count1 = 0;
  for (int i = ; 0i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      cout << i << " ";
      count1++;
    }
  }
  int count2 = 0; // dem cac phan tu chan

  cout << "dem : " << count1;
  return 0;
}