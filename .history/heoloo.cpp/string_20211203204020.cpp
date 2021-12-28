// b1 : tim do dai cua chuoi 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100];
    int len;
    cout << "nhap la :: ";
    gets(str);
    len = strlen(str);
    cout << len << endl;
    return 0;
} */


// bai 2 : 
// Viết chương trình C tìm số lần xuất hiện của một ký tự trong một chuỗi.
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout << "nhap chuoi : ";
    char c;
    cin >> s >> c;
    int count =0;
    for (int i =0 ;i < s.size(); i++){
        if ( s[i] == c){
            count++;
        }
    }
    cout << "so lan xuat hien cua ki tu la ; " << count;
    return 0;
} */


// Sắp xếp các ký tự của chuỗi theo thứ tự bảng chữ cái trong C+
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    cout << "nhap s : ";
    cin >> s;
    int size = strlen(s);
    cout << "mang ban dau se la : " << s;
    // in ra chuoi dao nguoc : 
    for (int i = 0;i < size -1 ; i++){
        for (int j = i ; j < size ; j++){
            if (s[i] > s[j]){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    cout << "mang sau khi sap xep se la : " << s;
} */



// BAI 4 :  SAO CHEP XAU NHAP TU BAN PHIM 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
   char s1[100]; // khoi tao xau thu chinh 
   cout << "nhap sau : ";
   cin >> s1;
   char s2[100]; // sau sao chep 
   int wh =0; // bien luu tru gia tri sao chep 
   while (s1[wh] != '\0'){
       s2[wh] = s1[wh];
       wh++;
   }
   cout << "chuoi ban dau : " << s1 << endl;
   cout << "chuoi sau khi sao chep se la : " << s2;
   return 0;
} */


// BAI 5 : IN RA CHUOI DAO NGUOC
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[100];
    cout << "nhap chuoi : ";
    cin >> s1;
    int yui =0; // bien luu giu gia tri sao chep :
    // tinh do dai chuoi ban dau
    while ( s1[yui] != '\0'){
      yui++;
    }
    cout << "chuoi ban dau se la : " << s1;
    cout << "chuoi dao nguoc se la : ";
    for (int i = --yui ; i >= 0 ; i--){
        cout << s1[i];
    }
    return 0;
}  */

// bai 5 -2 : chuoi dao nguoc cach 2 :
// dung ham strrev -
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    cout << "nhap s : ";
    cin >> s;
    cout << "chuoi ban dau : " << s << endl;
    cout << "chuoi dao nguoc se la : " << strrev(s);
    return 0;
}*/


// BAI 6 : TIM KEIM CHUOI : 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[100];
    char s2[100]; // chuoi tim kiem
    cout << "nahp vao chuoi : ";
    fgets(s1 , sizeof(s1) , stdin);

    cout << "nhap chuoi con : ";
    fgets(s2 , sizeof(s2) , stdin);
    
    char *kq = strstr(s1 , s2){
        if ( *kq != null ){
            cout << "tim thay ";
        } else {
            cout << "k thay chuoi ";
        }
    }
    return 0;
} */
 // bai 6 ,2 - tim kiem chuoi du dung thu vien strstr
 /*#include<iostream>
 #include<string.h>
 using namespace std;
 int main(){
     char s1[100];
     cout << "nhap s1 : ";
     cin >> s1;
     char s2[100]; // chuoi tim kiem
     cout << "nhap tu can tim kiem :";
     cin >> s2;
     char fist = strstr(s2);
     if (fist != '\0'){
         cout << "co trong chuoi";
     } else {
         cout << "k tim tahy";
     }
     return 0;
 }*/

// 7 : SO SANH 2 CHUOI :
/*#include<iostream>
#include<string.h>
using namespace std;
int strcmp(char s1[100] , char s2[100]){
    int min = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
    // duyet qua cac phan tu 
    for (int i =0 ;i < min ;i++){
        if (s1[i] > s2[i]){
            return 1; // chuoi 1 lon hon chuoi 2:
        } else if ( s1[i] < s2[i]){
            return -1; // chuoi 1 se nho hon chuoi 2 
        }
    }
    // ket thuc vong for k tim ra ta se kiem tra do dai xem ai dai hon 
    if ( strlen(s1) > strlen(s2)){
        return 1;
    } else if ( strlen(s1) < strlen(s2)){
        return -1;
    }
    return 0; // 2 cai no bang nhau 
}
int main(){
    char s1[100]; 
    cout << "nhap chuoi 1 : ";
    cin >> s1;
    char s2[100];
    cout << "nha[ chuoi 2 : ";
    cin >> s2;
    if (strcmp(s1,s2) > 0){
        cout << "1 > 2";
    } else if ( strcmp(s1,s2) < 0){
        cout << " 1 < 2";
    } else {
        cout << "-=-";
    }
    return 0;
} */

// bai 7.2 so snah chuoi dung ham 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[100];
    cout << "nhap chuoi s1 : ";
    cin >> s1;
    char s2[100];
    cout << "nhap chuoi s2 : ";
    cin >> s2;
    // so sanh ve do dai
    if ( strlen(s1) > strlen(s2)){
        cout << "chuoi 1 hon 2";
    } else if ( strlen(s1) < strlen(s2)){
        cout << "chuoi 2 hon 1";
    }
    return 0;
} */


// bai 7.3 so snah chuoi dung ham strcmp
/*#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char s1[100];
    cout << "nhap s1 : ";
    gets(s1);
    char s2[100];
    cout << "nhap s2 : ";
    gets(s2);
    if ( strcmp(s1,s2) == 0){
        cout << "chuoi 1 bang chuoi 2 ";
    } else if ( strcmp(s1,s2) > 0){
        cout << "chuoi 1 lon hon chuoi 2 ";
    } else {
        cout << "chuoi 2 hon chuoi 1 ";
    }
    return 0;
}*/

// BAI 8 : NOI CHUOI :
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s1;
    cout << "nhap s1  :";
    cin >> s1;
    string s2;
    cout << "nhap s2 : ";
    cin >> s2;
    string c = s1 + s2;
    cout << "chuoi sau noi se la : " << c;
    return 0;
} */


// BAI 9 : // so sanh theo thu tu chu cai  tu dien 
/*#include<iostream>
using namespace std;
int main(){
    string a = "abc";
    string b = "def";
    if (a > b){
        cout << "a lon hon\n";
    } else if ( a== b){
        cout << "a giogn b\n";
    } else {
        cout << "a nho hon b";
    }
    cout << a.compare(b);
    return 0;
} */

// bai 10 : cat so 
/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s = "tothichcau";
    string a = s.substr(2,4);
    cout << a << endl;
    return 0;
} */


// chuyen sau sang int

#include<bits/stdc++.h>
using namespace std;
int main(){
    /*string s = "123456323232424";
    long long x = stoll(s);
    cout << x;
    return 0; */
    string s = "thang yru     ngoc nhieu lam";
    stringstream ss(s);
    string temp;
    while (ss >> temp){
        std::cout << ss << endl;
    }
    return 0;
}