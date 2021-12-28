#include <iostream>
#include <set>
using namespace std;
int main()
{
  // set<int> v;
  // int n;
  // cin >> n;
  // for (int i = 0; i < n; i++)
  // {
  //   int x;
  //   cin >> x;
  //   v.insert(x);
  // }
  // cout << v.size() << endl;
  // cout << *v.begin() << endl; // truy cap den phan tu dau tien
  // cout << *v.rbegin() << endl; // truy cap den phan tu cuoi cung
  // for (set<int>::iterator it = v.begin() ; it != v.end() ; ++it){
  //   cout << *it;
  // }
  // return 0;
  int n, k;
  cin >> n >> k;
  int a[n];
  for (auto &x : a)
    cin >> x;
  multiset<int> v;
  for (int i = 0; i < k; i++)
  {
    v.insert(a[i]);
  }
  for (int i = k; i < n; i++)
  {
    cout << *v.rbegin() << " ";
    v.erase(v.find(a[k - 1]));
    v.insert(a[i]);
  }
  cout << *v.rbegin() << endl;
}