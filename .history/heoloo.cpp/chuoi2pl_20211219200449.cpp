// Bài 0. Tách từ với stringstream..............................................................................3

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);
  int word;
  int count = 0;
  while (word >> ss)
  {
    count++;
  }
  cout << count;
  return 0;
}