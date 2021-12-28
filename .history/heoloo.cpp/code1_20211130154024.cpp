// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
// tinh rong s = 1! + 2! + ,,, + n!
#include<iostream>
using namespace std;
int fac(int &n){
    int factorial = 1;
    for (int i =1 ;i <n ;i++){
        factorial *= i;
    }
    int sum =0;
    for (int i =1 ;i <n ;i++){
        sum += i*factorial;
    }
    cout << sum;
}
int main(){
    int n;
    cout << "nhap N : ";
    cin >> n;
    fac(n);
    return 0;
}