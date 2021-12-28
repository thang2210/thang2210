// b1 : khoi tao 1 ma tran // nhap xuat ma tran 
/*#include<iostream>
using namespace std;
int xuay_hien(int a[100][100] , int n , int m){
    for (int i =0 ;i <n ;i++){
        for (int j =0 ; j < m ; j++){
            cout <<  a[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n,m;
    cout << "nhap so hang : ";
    cin >> n;
    cout << "nhap so cot : ";
    cin >> m;
    int a[100][100];
    for (int i =0 ;i <n ;i++){
        for (int j =0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    xuay_hien(a,n ,m);
    return 0;
}*/

// cong tru 2 ma tran 
/*#include<iostream>
using namespace std;
int sumTwoMaxtrix(int a[100][100] , int n , int m , int b[100][100] , int x , int z ,int  c[100][100]){
    for (int i =0 ;i < n ;i++){
        for (int j =0 ; j < m ; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // in ra man hinh 
    for (int i =0 ;i <n ;i++){
        for (int j =0 ; j< m ; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int a[100][100] , b[100][100] , c[100][100]; // c se la ma tran moi = + 2 maxtrix con lai 
    int n , m;
    cout << "nhap so hang maxtrix 1 : ";
    cin >> n;
    cout << "nhap so cot maxtrix 1 : ";
    cin >> m;
    // khoi tao maxtrix 2 
    int x , z;
    cout << "nhap so hang cua maxtrix 2 :  ";
    cin >> x;
    cout << "nhap so cot maxtrix 2 : ";
    cin >> z;
    // khoi toa dieu kien 
    if ( n != x || m != z){
        cout << "2 ma tran khong cung kich thuoc : ";
        exit(0);
    }
    // du lieu dau cao 
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j <m ; j++){
            cin >> a[i][j];
        }
    }
    // du lieu dau vao cua maxtrix 2:
    for (int i =0 ;i < x ; i++){
        for (int j=0 ; j < z ; j++){
            cin >> b[i][j];
        }
    }
    sumTwoMaxtrix(a,n,m,b,x,z,c);
    return 0;
} */


// bai 3 : tong cac phan tu trong matrix
/*#include<iostream>
using namespace std;
int tinh_tong(int a[100][100] , int n , int m){
    int sum =0;
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j < m ; j++){
            sum += a[i][j];
        }
    }
    cout << "tong se ;a : " << sum;
}
int main(){
    int n , m;
    cin >> n >> m;
    int a[100][100];
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j < m ; j++){
            cin >> a[i][j];
        }
    }
    tinh_tong(a,n,m);
    return 0;
} */

// 4 maxtrix chuyen vi 
// maxtrix chuyen vi la , hoan doi so cot so haang cua ma tran nay thnah so hang so cot cua ma trix kia

/*#include<iostream>
using namespace std;
int chuyen_vi(int a[100][100] , int n , int m ){
    for (int i = 0 ; i < m ; i++){
        for (int j =0; j < n ; j++){
            cout << a[j][i];
        }
        cout << endl;
    }
}
int main(){
    int n , m;
    cout << "nhap hang maxtrix : ";
    cin >> n;
    cout << "nhap so cot m : ";
    cin << m;
    int a[100][100];
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j < m ; j++){
            cin >> a[i][j];
        }
    }
    chuyen_vi(a,n,m);
    return 0;
} */


// bai 5 : tinh tich 2 maxtrix
/*#include<iostream>
using namespace std;
int tich_matrix(int a[100][100] , int n , int m , int b[100][100] , int x , int z , int c[100][100]){
    for (int i =0 ;i < n ; i++){
        for (int j =0; j < m ; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    for (int i =0 ;i < n ; i++){
        for (int j =0; j < m ; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n,m;
    cout << "nhap so hang maxtrix 1 : ";
    cin >> n;
    cout << "nhap so hang maxtrix 1 : ";
    cin >> m;
    // maxtrix 2
    int x , z;
    cout << "nhap so hang maxtrix 2 : ";
    cin >> x;
    cout << "nhap so cot maxtrix 2 : ";
    cin >> z;

    // dieu kien 
    if ( n != x || m != z){
        cout << "2 ma tran k cung kich thuco";
        exit(0);
    }
    int a[100][100] , b[100][100] , c[100][100];
    // khoi tao 2 gia tri vao 
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j <m ; j++){
            cin >> a[i][j];
        }
    }
    // khoi tao maxtrix 2 :
    for (int i =0 ;i < x ; i++){
        for (int j = 0; j < z ; j++){
            cin >> b[i][j];
        }
    }
    tich_matrix(a,n,m,b,x,z,c);
    return 0;
} */

/*
Viết một chương trình C++ để hiển thị một menu cho phép người dùng lựa chọn hoặc quan sát tất cả bản ghi của sinh viên hoặc chỉ quan sát các bản ghi của một sinh viên cụ thể bởi lựa chọn id của sinh viên đó.

*/



// TIEN TO TRONG MANG 2 CHIEU 
/*#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "nhap n : ";
    cin >> n;
    cout << "nhap m : ";
    cin >> m;
    int a[n+1][m+1];
    for (int i =0 ;i <= n ;i++){
        for (int j =0 ; j <= m ; j++){
            cin >> a[i][j];
        }
    }
    // khai bao truy van 
    int q; cin >> q;
    while (q--){
        int h2 ,h3 ,c2,c3;
        cin >> h2 >> h3 >> c2 >> c3;
        int sum =0;
        for(int i = h2 ; i<= h3 ;i++){
            for (int j = c2 ; j <= c3 ; j++){
                sum += a[i][j];
            }
        }
        cout << sum << endl;
    }
    return 0;
} */

// tien to trong mang 2 chieu 
/*#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >>m;
    int a[100][100];
    for (int i =0 ;i < n ;i++){
        for (int j =0 ;j < m ; j++){
            cin >> a[i][j];
        }
    }
    // khoi tao truy van 
    int q;
    cin >> q;
    while (q--){
        int h0 ,h1 , c0 ,c1;
        cin >> h0 >> h1 >> c0 >> c1;
        int sum =0;
        for (int i = h0 ; i <= h1 ; i++){
            for (int j = c0 ; j <= c1 ; j++){
                sum += a[i][j];
            }
        }
        cout << sum << endl;
    }
    return 0;
} */



// cach 2 : frefix[i][j] : tong all phan tu tu hang 0 den i 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >>m;
    int a[100][100];
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j < m ; j++){
            cin >> a[i][j];
        }
    }
    int pre[100][100];
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j < m ; j++){
            pre[i][j] = pre[i -1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int q;
    cin >> q;
    while (q){
        int h1 , h2 ,c1 ,c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << (pre[h2][c2] - pre[h1 -1][c2] - pre[h2][c1-1] + pre[h1-1][c1-1]) << endl;
    }
    return 0;
}