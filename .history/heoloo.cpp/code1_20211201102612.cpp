// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
// tinh rong s = 1! + 2! + ,,, + n!
// kiem tra so hoan hao
#include<iostream>
using namespace std;
bool chek(int n){
    int sum =0;
    for (int i =0 ;i <n/2 ; i++){
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
    if ( chek(n)){
        cout << "la so hoan hao :";
    } else {
        cout << "k la so hoan hao";
    }
    return 0;
}