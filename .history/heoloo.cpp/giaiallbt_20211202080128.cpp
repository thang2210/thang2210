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


// bai 3
/*#include<iostream>
using namespace std;
int check_mang(int a[1000] , int n){
    int sum =0;
    int count =0; // dem cac so chan trong mangtrong bang:
    for (int i =0 ;i <n ;i++){
        if ( a[i] % 2 == 0){
            sum += a[i];
            count++;
        }
    } 
    if ( count == 0){
        cout << "trung binh cong cua mang se la : " << int(sum/count);
    } else {
        cout << "NO";
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    do {
        if ( n < 1 || n > 100){
            cout << "moi Ban nhap lai : ";
            cin >> n;
        }
        n++;
    } while ( n != 0);

    /*int a[1000];
    cout << "nhap cac phan tu cua mang ";
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    check_mang(a,n);
    return 0;
} */



// gia tri lon nhat mang so thuc
/*#include<iostream>
using namespace std;
float maxArray(int a[1000] , int n){
    float max = a[0];
    for (int i =0 ;i <n ;i++){
        if ( max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int main(){
    float n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    cout << "so lon : " << maxArray(a,n);
    return 0;
} */


// kiem tra mang co ton tai gia tri chan nho hon 2001
#include<iostream>
using namespace std;
int check_array(int a[1000] , int n ){
    int count =0;
    for (int i =0 ;i <n ; i++){
        if (a[i] % 2 == 0 && a[i] < 2001 ){
            count++;
        }
    }
    cout << "co nhung so chan nho hon 2001 la : " << count;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    check_array(a,n);
    return 0;
}

