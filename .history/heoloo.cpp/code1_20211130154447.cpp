// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
// tinh rong s = 1! + 2! + ,,, + n!
#include<iostream>
using namespace std;
int fac(int &n){
    int facto =1;
    double s =0; // tong
    for (int i =0 ;i <= n ;i++){
        facto *= i;
        s += (double)1/facto;
    }
    cout << "tong se la : " << sum;
}
int main(){
    int n;
    cout << "nhap N : ";
    cin >> n;
    fac(n);
    return 0;
}