// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    int c =a;
    a = b;
    b =c;
    cout << "swap " << a << b;
    return 0;
}