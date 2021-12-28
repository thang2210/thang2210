/*#include<iostream>
#include<math.h>
using namespace std;
// bai 1 kiem tra so nguyen to 
int main(){
    int n;
    cin >> n;
    if ( n < 2) {
        cout << "LOAI";
    }
    int count =0;
    for (int i =2 ;i <= sqrt(n) ;i++){
        if ( n % i == 0){
            count++;
        }
    }
    if (count == 0) cout << "yes";
    else cout << "no";
    return 0;
} */

// bai 2 in cac so ngiyen to tu 1 den n 
#include<iostream>
using namespace std;
bool isPrime(int n){
    bool kt = true;
    if ( n < 2) return false;
    for (int i =2 ;i <= n ;i++){
        if ( n % i == 0){
            kt = false;
            break;
        }
    }
    return kt;
}
int noisPrime(int n){
    for (int i =0 ;i <n ;i++){
        if (isPrime(i) == true){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cin >> n;
    isPrime(n);
    return 0;
}