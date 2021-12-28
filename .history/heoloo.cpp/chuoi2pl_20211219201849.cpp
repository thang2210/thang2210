// Bài 0. Tách từ với stringstream..............................................................................3

#include <bits/stdc++.h>
using namespace std;

/*int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);
  string word;
  int count = 0;
  while (ss >> word)
  {
    count++;
  }
  cout << count;
  return 0;
} */

// Bài 1. Xóa từ trong câu

int main()
{
  string s;
  getline(cin, s);
  string word;
  cin >> word; // tu can xoa
  stringstream ss(s);
  string token; // luu tu tach lai
  while (ss >> token)
  {
    if (token != word)
    {
      cout << token << endl;
    }
  }
  return 0;
}