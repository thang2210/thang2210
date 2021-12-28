#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;

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
// int n, k;
// cin >> n >> k;
// int a[n];
// for (auto &x : a)
//   cin >> x;
// multiset<int> v;
// for (int i = 0; i < k; i++)
// {
//   v.insert(a[i]);
// }
// for (int i = k; i < n; i++)
// {
//   cout << *v.rbegin() << " ";
//   v.erase(v.find(a[k - 1]));
//   v.insert(a[i]);
// }
// cout << *v.rbegin() << endl;

// map<int, int> v;
// v[100] = 200;
// v[200] = 300;
// for (pair<int, int> x : v)
// {
//   cout << x.first << " " << x.second << endl;
// }  // duyet qua phan tu trong mang

// in ra tan xuat hien cua 1 so torng mang su dung map - theo thu tu
// in ra k thro thu tu

// map<int, int> v;
// int n;
// cin >> n;
// int a[1000];
// for (int i = 0; i < n; i++)
// {
//   cin >> a[i];
//   v[a[i]]++;
// }
// for (int i = 0; i < n; i++)
// {
//   if (v[a[i]] != 0)
//   {
//     cout << a[i] << " - " << v[a[i]] << endl;
//     v[a[i]] = 0;
//   }
// }
// return 0;
// dem xem string xuat hien bao nhieu lan
//

//  BAI TAP LAM QUEN SET VOI MAP
// BAI 1 : Đếm số lượng phần tử khác nhau trong mảng số nguyê
#include <iostream>
#include <map>
#include <set>
/*int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    // set<int> p;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //   int x;
    //   cin >> x;
    //   p.insert(x);
    // }
    // cout << p.size() << endl;
 // ------ map
  //   map<int, bool> v;
  //   int n;
  //   cin >> n;
  //   for (int i = 0; i < n; i++)
  //   {
  //     int x;
  //     cin >> x;
  //     v[x] = true;
  //   }
  //   cout << v.size() << endl;

  // dung sap xep :

  return 0;
}  */
// bai 1 cach 2 : dung sap xep :
int main()
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
    sort(a, a + n);
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
      if (a[i] != a[i - 1])
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}

// Cho một mảng số nguyên gồm n phần tử, với mỗi truy vấn hãy kiểm tra xem một
// số nào đó có nằm trong mảng hay không ?
