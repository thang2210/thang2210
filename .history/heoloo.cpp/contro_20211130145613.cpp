// cho cap 5x + 4y == 1000 ? co bao nhieu cap x y thoa man dk nay 
/*#include<iostream>
using namespace std;
int main(){
    int count =0;
    for (int y =0 ; y < 250 ; y++){
        if ( (1000-(4*y))%5== 0){
            count++;
            cout << "x = " << ((1000-4*y) /5) << "\tY = " << y << endl;;
        }
    }
    cout << "cap x , y se la : " << count;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a =5;
    // khai bao con tro 
    int* p;
    // gan con tra vao a
    p = &a;
    // thay doi gia tri a qua con tro
    *p = 20;
    cout << "ves : " << a;
    return ;
    } */


    // Cho biến a kiểu số nguyên được nhập từ bàn phím, bạn hãy viết hàm tăng giá trị biến a lên 1 và hiển thị ra màn hình:
    /*#include<iostream>
    using namespace std;
    void change(int &a){
        a++; // a tang len 
    }
    int main(){
        // truyen tham chieu :
        // bien co cung dia chi voi bien dc truyen
        int a;
        cout << "e : ";
        cin >> a;
        change(a);
        cout << "sau khi la : " << a;
        return 0;

    } */


    // truyen tham tri 
    // la truyen gia tri tu bien nay sang bien khac
    /*#include<iostream>
    using namespace std;
    void chanke(int* p){
        (*p)++;
    }
    int main(){
        int a;
        cout << "nhap a : ";
        cin >> a;
        chanke(&a); 
        cout << "a l: " << a;
        return 0;
    } */


    // bai 5 : ho xâu s được nhập từ bàn phím, bạn hãy viết hàm chuyển các ký tự in thường trong xâu s thành in hoa và hiển thị xâu s ra màn hình.

//Ví dụ nếu bạn nhập s = "codelearn" như bên dưới:

// CACH 1 : TRUYEN THAM CHIEU 
// 1 tham chieu dc truyen khi co co cung dia chi voi bien dc truyen
/*#include<iostream>
#include<string.h>
using namespace std;
void luffy(string &s){
    for (int i =0 ;i < s.size() ; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] -=32;
        }
    }
}
int main(){
    string s;
    cout << "nhap s";
    cin >> s;
    luffy(s);
    cout << s;
    return 0;
} */

// CACH 2 TRUYRN THAM TRI
// - la truyen gia tri tu bien nay sang bien khac
/*#include<iostream>
#include<string.h>
using namespace std;
void upps(string* p){
    for (int i =0 ; i < (*p).size() ; i++){
        if ((*p)[i] >='a' && (*p)[i] <= 'z' ){
            (*p)[i] -= 32;
        }
    }
}
int main(){
    string s;
    cout << "nhap s : ";
    cin >> s;
    upps(&s);
    cout << s;
    return 0;
} */


// BAI 6 : Cho mảng số nguyên n phần tử  arr được nhập từ bàn phím, bạn hãy viết hàm trả về phần tử lớn nhất trong mảng arr sử dụng con trỏ và hiển thị ra màn hình:
// SU DUNG CON TRO
// truyen tham tri 
/*#include<iostream>
using namespace std;
int maxArray(int* p , int n ){
    int max = p[0];
    for (int i =0 ;i <n ;i++){
        if (p[i] > max){
            max = p[i];
        }
    }
    return max;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    cout << "max : " << maxArray(&a[0] , n);
    return 0;
} */

// BAI 7 : MANG CAP PHAT DONG :

 //Cho mảng các số nguyên n phần tử được nhập từ bàn phím (mảng này được cấp phát động và quản lý thông qua con trỏ arr), bạn hãy viết chương trình tính tổng của các phần tử trong mảng và hiển thị ra màn hình:
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    // khai bao mang cap dong 
    int* a = new int[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    // tinh tong
    int sum =0;
    for (int i =0 ;i <n ;i++){
        sum += a[i];
    }
    cout << "sum : " << sum;
    delete[]a;
    return 0;
} */

// bai 7 -2 .hien thi nhung so chia het cho 3 va khong chia het cho 5
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    // khoi tao mang cap phat dong 
    int* a = new int[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    // in ra nhung so chia het cho 3 va 5
    for (int i =0 ;i <n ;i++){
        if (a[i] % 3 == 0 && a[i] % 5 != 0){
            cout << a[i] << " ";
        }
    }
    delete[]a;
    return 0;
} */



// BAI 8 : // MANG 2 CHIEU TONG HANG VA TONG COT
// tinh tong hang ---
/*#include<iostream>
using namespace std;
int main(){
    int n ,m;
    cout << "nhap hang n : ";
    cin >> n;
    cout << "nhap cot n : ";
    cin >> m;
    // khai bao con tro cap 2:
    int** a;
    a = new int* [n];
    // a la mang n phan tu , 1 phan tu 1 1 con tro kieu int*
    for (int i =0 ;i <n ;i++){
        // cap phat cho cac n mang 1 chieu 
        a[i] = new int[m];
    }
    // truyen vao gia tri cua mang 
    for (int i =0 ;i <n ;i++){
        for (int j =0 ; j <m ;j++){
            cin >> a[i][j];
        }
    }
    // tinh tong theo hang
    for (int i=0 ;i <n ;i++){
        int sum =0;
        for (int j=0 ; j < m ; j++){
            sum += a[i][j];
        }
        cout << sum << endl;
    }
    // giai phpng bo nho 
    for (int i =0 ;i <n ;i++){
        // giai phong bo nho cho mang 1 chieu 
        delete[] a[i];
    }
    // giai phong bo nho cho mahg cac con tro
    delete[]a;
    return 0;
} */


// BAO 8.2 . TINH TONG THEO COT
/*#include<iostream>
using namespace std;
int main(){
    int n ,m;
    cout << "nhap n : ";
    cin >> n;
    cout << "nhap m : ";
    cin >> m;
    // khai bao con tro cap 2 :
    int** a;
    a = new int* [n];
    for (int i =0 ;i<n ; i++){
        a[i] = new int[m];
    }
    // nhap du lieu dau vao 
    for (int i =0 ;i <n ;i++){
        for (int j =0; j < m ; j++){
            cin >> a[i][j];
        }
    }
    // tinh tong cot
    for (int i =0; i < m ; i++){
        int sum =0;
        for (int j =0 ;j < n ;j++){
            sum += a[j][i];
        }
        cout << sum << endl;
    }
    // xoa bo nho 
    for (int i =0 ;i <n ;i++){
        // xoa bo nho cho manh 
        delete[] a[i];
    }
    // xoa bo nho cac con tro
    delete[]a;
    return 0;
} */
/*
bai tap ve con tro trong c++
*/

// B1 . CONG TRU 2 CON TRO NHAP TU BAN PHIM
/*#include<iostream>
using namespace std;
int main(){
    int a ,b; // khai bao a  va b 
    cin >> a >> b;
    int* p1; // khai bao con tro 1 
    int* p2; // khai bao con tro 2 
    // gan gia tri cua a , va b vao 2 con tro 
    p1 = &a;
    p2 = &b;
    int sum = *p1 + *p2;
    cout << "tong 2 con tro se la : " << sum;
    return 0;
}*/

// B2 : SWAP 2 GIA TRI CHO NHAU
/*#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    int* p1;
    int* p2;
    p1 = &a;
    p2 = &b;
    int c = *p1;
    *p1 = *p2;
    *p2 = c;
    cout << "swap se la : " << a << b;
    return 0;
} */


// BAI 3 : TINH TONG CAC GIA TRI PHAN TU TRONG MANG BANG CON TRO
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int* a = new int[1000];
    for (int i =0; i < n ;i++){
        cin >> a[i];
    }
    int sum =0;
    for (int i =0 ;i <n ;i++){
        sum += a[i];
    }
    cout << "tong la : " << sum;
    delete[]a;
    return 0;
} */

// --- giai theo cach goi ham di 
/*#include<iostream>
using namespace std;
int sumArray(int* p , int n){
    int sum =0;
    for (int i =0 ; i <n ;i++){
        sum += p[i];
    }
    cout << "sum la : " << sum;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    sumArray(a,n);
    return 0;
} */


// BAI 4 : TINH DO DAI CUA CHUOI SU DUNG CON TRO
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout << "nhap s : ";
    cin >> s;
    // khoi tao con tro
    string* p;
    p = &s;
    int len;
    len = strlen(*p);
    cout << "do dai : " << len;
    return 0;
}
