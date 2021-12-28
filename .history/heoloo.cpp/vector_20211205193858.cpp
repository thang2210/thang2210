#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //or (int i =0 ;i < v.size() ;i++){
      //  cout << v[i] << endl;
    //}
    //for ( auto x : v){
     //   cout << x;
    //}
    for (vector<int>:: iterator it = v.begin() ; it != v.end() ; it++){
        cout << *it << endl;
    }
    return 0;
}