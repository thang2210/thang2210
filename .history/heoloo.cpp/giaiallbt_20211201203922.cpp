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

/*#include<iostream>
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
    cout << "nhap n  ;";
    cin >> n;

    int a[100];
    // nhap du lieu dau vao 
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    check_Array(a,n);
    return 0;
} */

// GiAI BAI KT 1 TIET PTIT
/*#include<iostream>
// giai pt bac 1; ax + b =0;
using namespace std;
int main(){
    float a ,b;
    cout << "nhap a , b;" ;
    cin >> a >> b;
    if ( a == 0 && b == 0 ){
        cout << "py vo nghiem ";
    } else if ( a== 0 && b != 0){
        cout << "pt vo songhiem : ";
    } else if ( a!= 0 && b != 0){
        cout << "pt co 1 nghiem phan biet : x = " << -b/a;
    }
    return 0;
} */


// bai2 : viet chuong trinh kiem tra so hoan hao nho hon n
#include<iostream>
using namespace std;
bool check(int n){
    int sum =0; // dem cac so 
    for (int i =0 ;i <= n /2 ; i++){
        if ( n % i == 0){
            sum += i;
        }
    }
    if ( sum == n) return true;
    return false;
}
int ham_in_ra(int n){
    for(int i =0 ;i <n ;i++){
        if (check(n)){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    ham_in_ra(n);
    return 0;
}

