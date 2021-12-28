// tim so lon nhat va nho naht 
/*#include<iostream>
using namespace std;
int maxArray(int a[1000] , int n){
    int max = a[0];
    for (int i =0 ;i <n ;i++){
        if ( max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int minArray(int a[1000] , int n){
    int min = a[0];
    for (int i =0 ; i < n ;i++){
        if ( min > a[i]){
            min = a[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ; i <n ; i++){
        cin >> a[i];
    }
    cout << "gia tri nho nhat se la : " << minArray(a,n) << endl;
    cout << "gia tri lon nhat se la : " << maxArray(a,n);
} */


// mamng doi xung 
/*#include<iostream>
using namespace std;
int chek_mang(int a[1000] , int n){
   int count =0;
   for (int i =0 ;i <n ;i++){
       if (a[i] != a[n-1-i])
       count++;
   }
   if (count == 0)
       cout << "la mang doi xung";
    else 
        cout << "k la mang doi xung";
}
int main(){
    int n;
    cout <<"nhap n : ";
    int a[1000];
    for (int i =0;i < n ;i++){
        cin >> a[i];
    }
    chek_mang(a,n);
    return 0;
} */


// bai 7

/*#include<iostream>
using namespace std;
int chek_mang_doi_xung(int a[1000] , int n){
    int count =0;
    for (int i =0 ;i <n ;i++){
        if ( a[i] != a[n-1-i]){
            count++;
        }
    }
    if (count == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int main(){
    int n1,n2,n3;
    cout << "\nnhap mang 1: ";
    cin >> n1;
    int a1[1000] , a2[1000] , a3[1000];
    for (int i =0 ;i <n1 ;i++){
        cin >> a1[i];
    }
    cout <<"\nnhap n2 : ";
    cin >> n2;
    for (int i =0 ;i <n2 ;i++){
        cin >> a2[i];
    }
    cout << "\nnhap n3 : ";
    cin >> n3;
    for (int i =0 ;i <n3 ;i++){
        cin >> a3[i];
    }
    chek_mang_doi_xung(a,n);
    return 0;
} */


// bai 9
// tim gia tri xa x nhat 
/*#include<iostream>
#include<math.h>

using namespace std;
int chi_so(int a[1000] , int n , int x){
    int max = abs(a[0] - x); // se lay so lon tru di cac phan tu cua x
    int j =0; // j de luu gia tri xa naht 
    for (int i =1 ;i <n ;i++){
        if (max < abs(a[i]) - x){
            max = abs(a[i] - x);
            j =i;
        }
    }
    return a[j];
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ; i <n ;i++){
        cin >> a[i];
    }
    int x;
    cout << "nhap x : ";
    cin >> x;
    cout << "si so xa naht " << chi_so(a, n ,x);
    return 0;
} */


// bai 9 -2 :
// tim gia tri gan naht 
/*#include<iostream>
#include<math.h>
using namespace std;
int chi_gan(int a[1000] , int n , int x){
    int min = abs(a[0] - x); // ham tra ve gia tri tuyet doi 
    int j =0; // luu chi so gan nhat 
    for (int i =1 ; i < n ;i++){
        if ( min > abs(a[i] - x)){
            min = abs(a[i] - x);
            j =i;
        }
    }
    return a[j]; // tra ve gia tri gan nhat
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    int x;
    cout << "nhap x : ";
    cin >> x;
    cout << " gia tri gan nahtse la :  " << chi_gan(a ,n ,x);
    return 0;
} */


// bai 10 : 
// the hien tan xuat no xuat hien 

/*#include<iostream>
using namespace std;
int tan_xuat_cua_mang(int a[1000] , int n){
    int b[1000]; // tao 1 mang de luu tru cac gia tri tan xuat
    int max = a[0];
    for (int i=0 ;i <n ;i++){
        if ( max < a[i]){
            max = a[i];
        }
    }
    for (int i =0 ;i <= max ; i++){
        b[i] =0;
    }
    for (int i =0 ;i <n ;i++){
        b[a[i]] += 1; // hien tan xuat cua a;
    }
    for (int i =0 ;i <= max ; i++){
        if ( b[i] > 0){
            cout << i << " - " << b[i] << "; " << endl;
        }
    }
    // hien tan so xuat hien nhieu nhat
    int amx =0;
    for (int i =0 ;i <n ;i++){
        if ( amx < b[i]){
            amx = b[i];
        }
    }
    cout << "gia tri lon nnhat se la : " << a[amx];
}
int main(){
    int n;
    cout << "ENTER : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    tan_xuat_cua_mang(a,n);
    return 0;
} */



// bai 11 :
// chen phan tu  theo thu tu tang dan
/*#include<iostream>
using namespace std;
int sortArray(int a[1000] , int n){
    for (int i =0 ;i <n ;i++){
        for (int j = i ; j <n ;j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int chen_mang(int a[1000] , int n , int k , int x){
    for (int i = n ; i >= k + 1 ; i--){
        a[i] = a[i-1];
    }
    a[k] = x;
    n++;
    for (int i =0 ;i <n ;i++){
        sortArray(a,n);
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    int k;
    cout << "nhap k : ";
    cin >> k;
    int x;
    cout << "nhap x";
    cin >> x;
    chen_mang(a,n,k,x);
    return 0;
} */


// bai 13 chen mang 1 vao mang 2
/*#include<iostream>
using namespace std;
int tron_mang(int a[1000] , int n , int b[1000] , int m, int c[1000] ){
    int size = 0;
    int i = 0 , j =0;
    while ( i < n && j < m ){
        if ( a[i] < b[j]){
            c[size] = a[i];
            size += 1;
            i += 1;
        } else {
            c[size] = b[j];
            size += 1;
            j += 1;
        }
    }
    while ( i < n){
        c[size] = a[i];
        size += 1;
        i +=1;
    }
    while ( j < m){
        c[size] = b[j];
        size += 1;
        j += 1;
    }
    cout << "mang sau khi tron se la : ";
    for (int i =0 ;i < size ; i++){
        cout << c[i] << " ";
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ; i++){
        cin >> a[i];
    }
    int m;
    cout << "nhap m ; ";
    cin >> m;
    int b[1000];
    for (int i =0 ; i <n ;i++){
        cin >> b[i];
    }
    int c[1000]; // tao mang moi 
    tron_mang(a,n,b,m,c);
    return 0;
} */


// bai 13 -2
// mang 2 vao mang 1 
// gan mang 2 vao k 
/*#include<iostream>
using namespace std;

int chen_mang(int a[1000] , int n , int b[1000] , int m , int k ){
    for (int i = m + n -1 ; i >= k ;i--){
        a[i] = a[i-m];
    }
    // gan b qua a
    for (int i = k ; i < k + m ; i++ ){
        a[i] = b[i -k];
    }
    for (int i =0 ;i < n ;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n,m;
    cout << "nhap n : ";
    cin >> n;
    int a[1000] , b[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    cout << "nhap m : ";
    cin >> m;
    for (int i =0 ;i <m ; i++){
        cin >> b[i];
    }
    int k;
    cout << "nhap k : ";
    cin >> k;
    chen_mang(a,n,b,m,k);
    return 0;
} */

// bai 25 : mang do da sap xep theo thu tu hay chua
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    bool kt1 = true;
    bool kt2 = true;
    for (int i =1 ;i <n ;i++){
        if (a[i] <= a[i-1]) kt1 = false;
        if (a[i] >= a[i-1]) kt2 = false;
    }
    if ( kt1 || kt2 ) cout << "YES";
    else cout << "NO";
    return 0;
} */
// tinh tong cot
/*#include<iostream>
using namespace std;
int main(){
    int n ,m;
    cout << "nhap hang n : ";
    cin >> n;
    cout << "nhap cot m : ";
    cin >> m;
    int a[100][100];
    for (int i =0 ;i <n ; i++){
        for (int j =0 ;j < m ;j++){
            cin >> a[i][j];
        }
    }
    for (int i =0 ; i < m ;i++){
        int sum =0;
        for (int j =0 ; j < n ;j++){
            sum += a[j][i];
        }
        cout << sum << endl;
    }
    return 0;
} */

// TONG TIEN TO TREN MANG 1 CHIEU
// TRUY VAN FREFIX SUM
// bai 1 tinh tong chi so left - right
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    // khai bao vogn lap for each
    for (auto &x : a) cin >> x;
    int q; cin >> q; // khai boa doan truy van 
    while (q--){
        int l ,r;
        cin >> l >>r;
        int sum =0;
        for (int i = l ; i <= r ;i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
} */


// bai 2 : 
// truyn van tu mang 1 den 2
#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n +1];
    for (int i =1 ; i <= n ;i++){
        cin >> a[i];
    }
    int prefix[n +1] = {0};
    for (int i =1 ;i <= n ;i++){
        prefix[i] = prefix[n] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
    return 0;
}