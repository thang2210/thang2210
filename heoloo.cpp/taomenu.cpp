/*

-------------- TAO MENU VE MANG ----------------------

*/
#include<iostream>

using namespace std;
int main(){
    system("cls"); // lenh xoa man hinh;
    cout << "\t\t\n\n=========MENU===========";
    cout << "\n1 . Tinh Trung BinhCOng Cac So O Trong Mang;";
    cout << "\n2 . Tim SO Lon nHat O Trong Mang ";
    cout << "\n3 . Tim Vi tri Nho nhat o trong Mang ";               //  MENU ---
    cout << "\n4 . Dem cac so chinh phuong o trong mang ";
    cout << "\n5 . Hien Thi cac so nguyen to len man hinh";
    cout << "\n6 . Thay the cac phan tu am o trong mang = 0";
    cout << "\n7 . Xoa cac phan tu am co o trong mang ";
    cout << "\n8 . Sap xep mamg theo chieu tang va giam dan";
    cout << "\t\t\n\n=========END===========";

    // NHAP DU LIEU DAU VAO
    int luachon;
    cout << "\nNhap Lua Chon : ";
    cin >> luachon;

    while (true){  
        if (luachon == 0){
            break;
        } else if ( luachon == 1){  // in ra trung binh cong cua mang;
            int n;
            cout << "nhap n : ";
            cin >> n;     
            int a[1000];
            for (int i =0 ;i <n ;i++){
                cin >> a[i];
            }
            int count =0;
            int sum =0;
            for (int i =0 ;i <n ;i++){
                sum += a[i];
                count++;
            }
            cout << "\nTrung Binh COng se la : " << (float) sum / count;
            system("pause");
        } else if ( luachon == 2){
            
        }
    } 
    return 0;
}