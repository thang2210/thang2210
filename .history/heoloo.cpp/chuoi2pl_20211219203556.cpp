// Bài 0. Tách từ với stringstream..............................................................................3

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <vector>
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

/*int main()
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
      cout << token << " ";
    }
  }
  return 0;
}

c2  : vector<string> v;

 */

// Bài 2.1. Tạo email
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;
    }
    vector<string> v;
    stringstream ss(s);
    string temp; // luu tu vua tac
    while (ss >> temp)
      v.push_back(temp);
    cout << v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++)
    {
      cout << v[i][0];
    }
    cout << "@gmail.com" << endl;
  }
  return 0;
}