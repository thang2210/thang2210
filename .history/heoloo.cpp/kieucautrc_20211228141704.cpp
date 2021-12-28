// tom tat li thuyet la ntn nay
// TOAN TU AND (&)
// KHI MUON DOI 1 SO HE 10 SANG HE NHI PHAN TA CU CHIA LIEN TIEP CHO NO QUA 2 LAY
// PHAN DU ROI DAO NGUOC LA RA
/*
  --- NEU 1 TRONG 2 BIT CO GIA TRI BANG NHAU SE TRA VE 1
    NGUOC LAI SE TRA VE 0
    ---- TOAN TU OR (\);
    - NEU 1 TRONG 2 BIT CO GIA TRI BANG1 SE TRA VE 1
    NGUOC LAI SE TRA VE 0
    VD :
            0 \ 0 = 0
            1 \0 = 1
            0 \1 =1
            1 \ 1 = 1

 ---TOAN TU XOR ( ^ )
 GUA 2 BIT NO SE TRA VE 1 NEU GIA TRI CAU NO DOI NHAU
 NGGUOC LAI SE TRA VE 0


 -- PHEP DICH TRAI DICH PHAI , DICH SANG BAO NHIEU DON VI
 -- PHEP DAO BITT
  DAO TAT CA CAC SO 0 THANH 1 THANH 0
  */

// BAI TAP 1 : CHO 2 SO NGUYEN NHAP TU BAN PHIM
// HAY VIEN CT (A & B) + (A \ B)

/*

  KIEU STRUCT : CHO PHEP BAN KET HOP TAT CA KIEU DU LIEU MOI DO BAN TU DINH NGHIA

*/

// BAI 1 TAO 2 THUOC TINH CO HS VA TUOI

//#include<iostream>
/*using namespace std;
// khai bao struct voi 2 doi tuong la tuoi va ten
struct Student
{
 string name;
 int age;
 string Adress;
 int Date;
};

int main(){
 // tao ra 1 doi tuong kieu studen de luu thong tin
 Student s1;
 cout << "nhap ten ";
 cin >> s1.name;
 cout << "nhap tuoi : ";
 cin >> s1.age;
 cout << "nhap dia chi : ";
 cin >> s1.Adress;
 cout << "nhap nagy sinh : ";
 cin >> s1.Date;
 cout << "ho va ten : " << s1.name << endl;
 cout << "tuoi : " << s1.age << endl;
 cout << "DIA CHI : " << s1.Adress << endl;
 cout << "Ngay SInh : " << s1.Date;
 return 0;
} */

// BAI 2 : NAHP BAN PHIM MANG CAP PHAT DONH
// hien diem sinh vien coa nhat
// tim tuoi cua hs cao nhat di :
/*#include<iostream>
using namespace std;
// khai bao struct voi 3 doi tuong name age scre
struct  hocsinh
{
 string name;
 int age;
 int score;
};

int main(){
 int n;
 cout <<  "nhap n : ";
 cin >> n;
 // khai bao 1 mang dong
 hocsinh* diem = new hocsinh[1000];
 // nhap du lieu dau vao
 for (int i=0 ; i <n ;i++){
   cin >> diem[i].name >> diem[i].age >> diem[i].score;
 }
 //tim diem cua hoc sinh caho nhat
 hocsinh max = diem[0];
 for (int i =1 ; i <n ; i++){
   if ( diem[i].score > max.score){
     max = diem[i];
   }
 }
 cout << "name : " << max.name << endl;
 cout << "tuoi : " << max.age << endl;
 cout << "diem : " << max.score;
 delete[] diem;
 return 0;
} */

// bai 2 -2 : ai cao tuoi nhat ?
/*#include<iostream>
using namespace std;
// khai bao struct voi 3 doi tuong
struct student
{
  string name;
  int age;
  int score;
};

int main(){
  int n;
  cout << "nhap : ";
  cin >> n;
  // khai bao mang dong
  student* tuoi = new student[1000];
  for (int i =0 ; i < n ;i++){
    cin >> tuoi[i].name >> tuoi[i].age >> tuoi[i].score;
  }
  // tim ai cao tuoi nhat
  student max = tuoi[0];
  for (int i = 1; i < n; i++){
    if(tuoi[i].age > max.age){
      max = tuoi[i];
    }
  }
  // xuat ra man hinh
  cout <<"name : " << max.name << endl;
  cout << "tuoi: " << max.age << endl;
  cout << "diem : " << max.score;
  delete[]tuoi;
  return 0;
} */

// BAI 3 : viet chuong trinh khai bao stduen . dung
// phuong thu display(); , hien thi all len man hinh
/*#include<iostream>
using namespace std;
// khai bao struc voi 3 doi tuong
struct  student
{
  string name;
  int age;
  int score;
  void display(){
    cout << "name : " << name << endl;
    cout << "tuoi : " << age << endl;
    cout << "diem : " << score << endl;
  }
};

int main(){
  int n;
  cout << "nhap n : ";
  cin >> n;
  // khai bao mag
  student thang[1000];
  for (int i =0 ;i <n ;i++){
    cin >> thang[i].name >> thang[i].age >> thang[i].score;
  }
  // in ra man hinh
  for (int i =0 ; i < n;i++){
    thang[i].display();
  }
  return 0;
} */

// bai 4 : LAY THONG TIN GANG HAM GETINFORMATION
/*#include<iostream>
using namespace std;
// khoi toa struct voi 2 doi tuong
struct studen {
 string name;
 int age;
 void display() {
   cout << "ten : " << name << endl;
   cout << "tuoi ; " << age << endl;
 }
 void getInfomation(){
   cin >> name >> age;
 }
};
int main(){
 int n;
 cout << "nahp n : ";
 cin >> n;
 studen mang[1000];
 for (int i =0 ;i <n ;i++){
   mang[i].getInfomation();
 }
 for (int i =0 ; i <n ; i++){
   mang[i].display();
 }
 return 0;
} */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct sophuc
{
  int a, b;
  sophuc operator+(const sophuc other)
  {
    sophuc tong;
    tong.a = a + other.a;
    tong.b = b + other.b;
    return tong;
  }
};

int main()
{
  sophuc a(1, 2), b(3, 4);
  sophuc c = a + b;
  return 0;
}