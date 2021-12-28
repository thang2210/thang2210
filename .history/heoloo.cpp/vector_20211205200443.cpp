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
// kieu du lieu long long string


/*int main(){
    int n;
    cin >> n;
    vector<int> it(n,100); // khai bao vecto da co san n pahn ti 
    for (int i =0 ;i <n ;i++){
        cout << it[i] << endl;
    }
    it.push_back(20);
    return 0;
} */

int main(){
    vector<string> v;
    v.push_back("thang lai lap trinh");
    v.push_back("ok thang 1 2 3");
    for (int i =0 ;i < v.size() ; i++){
        cout << v[i] << " ";
    }
    return 0;
}