// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
// tinh rong s = 1! + 2! + ,,, + n!
// kiem tra so hoan hao
/*#include<iostream>
using namespace std;
bool chek(int n){
    int sum =0;
    for (int i =0 ;i <= n/2 ; i++){
        if ( n % i == 0){
            sum += i;
        }
    }
    if (sum == n) return true;
    return false;
}
int main(){
    int n;
    cout << "nhap : ";
    cin >> n;
    if (chek(n) )
    cout << "la so hoan hao";
    else 
    cout << "no";
    return 0;
} */

#include<iostream>
using namespace std;
int check_Array(int a[100] , int n){
    int sum =0; 
    int count =0; // dem cac so chan trong mang 
    for (int i =0 ;i <n ;i++){
        if ( a[i] % 2 == 0){
            sum += a[i];
            count++;
        }
    }
    cout << "gia tri trung binh cac so chan se la : " << int(sum/count);
}
int main(){
    int n;
    do {
        cout << "nhap n : ";
        cin >> n;
        if ( n < 0 || n > 100){
            cout << "moi nhap lai ";
        }
    } while ( n != 0);
    int a[100];
    // nhap du lieu dau vao 
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    check_Array(a,n);
    return 0;
}