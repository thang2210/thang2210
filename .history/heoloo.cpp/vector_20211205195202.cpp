#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
// vector<kieu du lieu > ten_vectoe
// push_back() day ve cuoi 
// size() kick thuoc cua vector
// truy cap phan tu trong vecto
// duyrt thong qua chi so (index)
// duyet bang for each

int main(){
    vector<int> thang;
    thang.push_back(10);
    thang.push_back(20);
    cout << thang.size();
    return 0;
}