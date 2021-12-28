// Bài 0. Tách từ với stringstream..............................................................................3

#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);
  string word;
  int count = 0;
  while (word >> s)
  {
    count++;
  }
  cout << count;
  return 0;
}