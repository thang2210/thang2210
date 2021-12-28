#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

// bai 1 :
/*int main()
{
  // bai 1 : chuyen ki tu thanh in thuong
  char s[100];
  cin >> s;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      s[i] += 32;
    }
  }
  cout << s;
} */

// Bài 3. Đếm số lượng chữ cái, kí tự số, kí tự đặc biệt trong xâu
/*int main()
{
  char s[100];
  gets(s);
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (isalpha(s[i]))
      cnt1++;
    else if (isdigit(s[i]))
      cnt2++;
  }
  cout << "chu : " << cnt1;
  cout << "so : " << cnt2;
  cout << "con lai : " << strlen(s) - cnt1 - cnt2;
} */

// Bài 4. Đếm số lần xuất hiện của các kí tự trong xâu 1
/*int main()
{

  char s[100];
  cin >> s;
  int cn[26] = {0};
  for (int i = 0; i < strlen(s); i++)
  {
    cn[s[i] - 'a']++;
  }
  for (int i = 0; i < 27; i++)
  {
    if (cn[i] != 0)
    {
      cout << (i + 'a') << "-" << cn[i] << endl;
    }
  }
  return 0;
} */

// Bài 6. Đếm số lần xuất hiện của các kí tự trong xâu 3
/*int main()
{
  char s[100];
  cin >> s;
  int vn[256]= {0};
  for (int i=0 ;i < strlen(s) ;i++){
    vn[s[i]]++;
  }
  char kt;
  int res =0;
  for (int i=0 ;i < 256 ; i++){
    if ( vn[i]){
      if (vn[i] > res){
        res = vn[i];
        kt = (char)(i);
      }
    }
  }
  return kt;
} */

// Bài 7. Các kí tự xuất hiện ở cả 2 xâu

/*int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int vn[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    vn[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {
    if (vn[s2[i]])
    {
      vn[s2[i]] = 2;
    }
  }
  for (int i = 0; i < 256; i++)
  {
    if (vn[i] == 2)
    {
      cout << i;
    }
  }
} */

// Liệt kê các kí tự chỉ xuất hiện trong xâu 1 mà không xuất hiện trong xâu 2
/*int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int cnt[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    cnt[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {
    if (cnt[s2[i]])
    {
      cnt[s2[i]] = 0;
    }
  }
  for (int i = 0; i < 256; i++)
  {
    if (cnt[i] != 0)
    {
      cout << i;
    }
  }
} */

// Bài 9. Liệt kê các kí tự xuất hiện ở 1 hoặc 2 xâ
/*int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int vn[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    vn[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {

    vn[s2[i]] = 1;
  }
  for (int i = 0; i < 256; i++)
  {
    if (vn[i] != 0)
    {
      cout << (char)(i);
    }
  }
}*/

// Bài 10. Xâu pangram 1

/*int xaupr(char s[1000])
{
  int cnt[26] = {0};
  for (int i = 0; i < strlen(s); i++)
  {
    cnt[s[i] - 'a'] = 1;
  }
  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] == 0)
      return 0;
  }
  return 1;
}
int main()
{
  char s[1000];
  gets(s);
  if (xaupr(s))
    cout << "yes";
  else
    cout << "no";
} */

// Bài 12. Xâu đối xứng 1
/*int check(char s[100])
{
  int l = 0, r = strlen(s) - 1;
  while (l < r)
  {
    if (s[l] != s[r])
      return 0;
    l++;
    r--;
  }
  return 1;
}
int main()
{
  char s[100];
  gets(s);
  if (check(s))
    cout << "yes";
  else
    cout << "no";
} */

// bai 13 : - xdc 2 :
/*int check(char s[100])
{
  int count = 0;
  int l = 0, r = strlen(s) - 1;
  while (l < r)
  {
    if (s[l] != s[r])
      count++;
    l++;
    r--;
  }
  if (strlen(s) % 2 == 1 && count <= 1)
    return 1;
  if (strlen(s) % 2 == 0 && count == 0)
    return 1;
  return 0;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char s[100];
    cin >> s;
    if (check(s))
      cout << "yes";
    else
      cout << "no";
  }
} */

// -------------------- CHUONG 2 :
// Bài 1. Liệt kê các từ xuất hiện trong câu
int main()
{
  char s[100];
  gets(s);
  char *token = strtok(s, " ");
  while (token != NULL)
  {
    token = strtok(NULL, " ");
    cout << token;
  }
}