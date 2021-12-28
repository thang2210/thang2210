// Bạn hãy viết chương trình nhập vào từ bàn phím 10 số nguyên và hiển thị ra tổng của 10 số này.
 /*#include<iostream>
using namespace std;
int main() {
	int a[10];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		sum += a[i];
	}
	cout << sum;
	return 0;
} */


// tim so lon nhat trong mang
/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxValue = arr[0];
	for (int i = 0; i < n; i++) {
		if (maxValue < arr[i]) {
			arr[i] = maxValue;
		}
	}
	cout << maxValue;
	return 0;
} */


// tong phan tu dau tien va phan tu cuoi
 /*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << arr[0] + arr[n - 1];
	return 0;
} */

// hien thi nhung so cahn trong mang
 /* #include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	return 0;
} */

// hien thi ra mang bang k
 /*#include<iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			count++;
		}
	}
	cout << count;
	return 0;
} */
 

// tinh tong cac so le nho hon  khong trong mang
/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1 && arr[i] > 0) {
			sum += arr[i];
		}
	}
	cout << sum;
	return 0;
} */


// hien thoi nhung so lon hon bang khong hoac nho hon bang 10
/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 0 && arr[i] <= 10) {
			cout << arr[i] << " ";
		}
	}
	return 0;
} */



// sap xep mang theo thu tu tang dan
/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i]; // khoi tao bien tam
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
} */


// mang 2 chiue
 /*#include<iostream>
using namespace std;
int main() {
	int arr[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
	}
	cout << sum;
	return 0;
} */


// tinh trung binh do dai cua mang nhap tu ban phim
/*#include<iostream>
using namespace std;
int main() {
	int arr[20] = { 1 , 2, 3, 4,5,6,7 ,8 ,9 ,10 ,11 , 12, 13 ,14 ,15 ,16 ,17 ,18 ,19,20 };
	// int ra do dai cua sau
	int size = sizeof arr / sizeof arr[0];
	cout << "cac phan tu o phia tren se la " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	// tinh tung binh 
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << " trung binh se la " << (float)sum / size;
	return 0;
} */


// sao chep mang
 /*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int arr[10] = { 1 , 2, 3, 4, 5, 6, 7, 8,9,10 };
	int arr_copy[10];
	for (int i = 0; i < 10; i++) {
		arr_copy[i] = arr[i];
	}
	cout << "mang ban dau => mang sao chep" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw(5) << arr[i] << setw(5) << arr_copy[i] << endl;
	}
	return 0;
} */


// in ra mang tron theo thu tu dao chieu
 /*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int arr[10] = { 1 , 2, 3,4 ,5 ,6, 7, 8 ,9 ,10 };
	int arr_copy[10];
	for (int i = 0; i < 10; i++) {
		arr_copy[9 - i] = arr[i];
	}
	cout << "mang ban dau => mang xao tron" << endl;
	for (int i = 0; i < 10; i++) {
		cout << setw(5) << arr[i] << setw(5) << arr_copy[i] << endl;
	}
	return 0;
}*/


// Chia một mảng thành hai mảng trong C++
// bai tap ve mang 1 ti
// tim gia tri lon nhat va nho naht trng mang
 /*#include<iostream>
using namespace std;
void nhap_mang(int arr[1000], int n) {
	cout << "moi ban nhap " << endl;
}
// ham gia tri tang dan
void gia_tri_tang_dan(int arr[1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "gia tri tang dan se la = " << arr[i] << " " << endl;
	}
}
// ham theo vheiu giam dan
void gia_tri_giam_dan(int arr[1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << "gia tri giam dan se la = " << arr[i] << " ";
	}
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // nhap gia tri dau vao
	}
	gia_tri_tang_dan(arr, n);
		gia_tri_giam_dan(arr, n);
	return 0;
} */


// tim gia tri lon nhat va nho nhat trong mang
 /*#include<iostream>
using namespace std;
int maxOfArray(int arr[1000] , int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}
int minOfArray(int arr[1000], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << maxOfArray(arr , n) << "      " << minOfArray(arr, n);
	return 0;
} */

// tim so lan xaut hien cua 1 so tring mang
 /*#include<iostream>
using namespace std;
int main() {
	int n ,k;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			count++;
		}
	}
	cout << "so lan xuat hien se la " << count;
	return 0;
}
*/

// chai 1 manh thanh 2 mang :::
 /*#include<iostream>
using namespace std;
int main() {
	int arr[12] = { 1 , 2, 3, 4, 5,6 ,7 ,8 ,9 ,10 , 11 , 12 };
	int even[12];
	int odd[12];
	int e, d;
	e = d = 0;
	for (int i = 0; i < 12; i++) {
		if (arr[i] % 2 == 0) {
			even[e] = arr[i];
			e++;
		}
		else {
			odd[d] = arr[i];
			d++;
		}
	}
	cout << "\nmang ban dau la ";
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n mang chan la ";
	for (int i = 0; i < e; i++) {
		cout << even[i] << " ";
	}
	cout << "\n mang le se la";
	for (int i = 0; i < d; i++) {
		cout << odd[i] << " ";
	}
	return 0;
}*/











// gop 1mang thanh 2 mang
/*#include<iostream>
using namespace std;
int main()
{
	int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
	cout << "naho vao mang thu 1: ";
	cin >> sizeOne;
	cout << "nhap " << sizeOne << " cac pahn tu trong mang se la : ";
	for (i = 0; i < sizeOne; i++)
	{
		cin >> arrOne[i];
		arrMerge[i] = arrOne[i];
	}
	k = i;
	cout << "\nnhap mang thu 2: ";
	cin >> sizeTwo;
	cout << "nhap " << sizeTwo << " cac pahn tu se la  ";
	for (i = 0; i < sizeTwo; i++)
	{
		cin >> arrTwo[i];
		arrMerge[k] = arrTwo[i];
		k++;
	}
	cout << "\nmang moi se la (Merged Array):\n";
	for (i = 0; i < k; i++)
		cout << arrMerge[i] << " ";
	cout << endl;
	return 0;
}*/

/*   #include <iostream>
using namespace std;



void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\nNhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "\t" << a[i];
	}
}
void xoa_1_vt(int a[], int& n, int x) {
	for (int i = x; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

void xoa_so_am(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			xoa_1_vt(a, n, i);
			i--;
		}
	}
}
int main(int argc, char** argv) {
	int a[100], n;
	cout << "Nhap so pt cua mang: ";
	cin >> n;

	nhap(a, n);
	cout << "\nMang vua nhap la: ";
	xuat(a, n);
	xoa_so_am(a, n);
	cout << "\nMang sau khi xoa so am la: ";
	xuat(a, n);
	return 0 */






// dem so lan xuat hien cua x
 /*#include<iostream>
using namespace std;
int main() {
	int n ,x;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			count++;
		}
	}
	cout << "so lan xuat hien cua ohan tu x trong mang se la : " << count++;
	return 0;
} */




// Sieu Bai Tap
/* Nhập từ bàn phím mảng số nguyên gồm n phần tử.

Tính trung bình cộng các số lẻ ở vị trí chẵn
Tìm số lớn nhất trong mảng vừa nhập
Tìm vị trí các số hỏ nhất trnong mảng
Đếm các số chính phương có trong mảng
Hiện thị các số nguyên tố có trong mảng lên màn hình
Thay thế các phần tử âm có trong mảng bằng giá trị 0
Chen phan tu vao
Xóa các phần tử âm có trong mảng
Sắp xếp mảng đã nhập theo thứ tự tăng dần
*/

// ---------------------------------------- BAI LAM ------------------------------------


/*#include<iostream>
using namespace std;
// tinh trung binh cong
void trung_binh_cong(int a[1000], int n) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		count++;
		sum += a[i];
	}
	cout << "Trung Binh Cong SE la : " << (float)sum / count << endl;
}
// tim so lon nhat
int maxArray(int a[1000], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
// vi tri nho nhat trong mang 
int minArray(int a[1000], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}
// dem cac so chinh phuong trong mang 
bool kiem_tra_scp(int n) {
	if (n < 1) {
		return false;
	}
	int i = 1;
	while (i * i <= n) {
		if (i * i == n) {
			return true;
		}
		i++;
	}
	return false;
}
void ham_tra_ve_scp(int a[1000], int n) {
	for (int i = 0; i < n; i++) {
		if (kiem_tra_scp(a[i])) {
			cout << "\ncac so chinh phuong co trong mang se la : " << a[i] << " ";
		}
	}
}
// hien thi cac so nguyen to
bool kiem_tra_snt(int n) {
	bool kt = true;
	if (n < 2) {
		kt = false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			kt = false;
			break;
		}
	}
	return kt;
}
void tra_ve_so_nguyen_to(int a[1000], int n) {
	for (int i = 0; i < n; i++) {
		if (kiem_tra_snt(a[i]) == true) {
			cout << "\ncac so nguyen to trong mang se la : " << a[i] << " ";
		}
	}
}
// thay the cac phan tu am = so 0
/*void thay_the(int a[1000], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a[i] = 0;
		}
	}
	cout << "\nmang sau khi thay the se la : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
} */ 
// xoa phan tu am trong mang 
/*void xoa_1_vt(int a[1000], int& n, int k) {
	for (int i = k; i < n; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void sau_khi_xoa(int a[1000], int &n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			xoa_1_vt(a, n, i);
			i--;
		}
	}
	cout << "\nMang sau khi xoa se la : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
// sap sep mang theo chieu tnag dan
void sortArray1(int a[1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "\nMang sau khi sap xep se la : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void sortMrray(int a[1000], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << "\nMnag sau khi sap sep se la : ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int main() {
	int n;
	cout << "nhap so phan tu cua mnag : ";
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) {  // nhap vao ban phim
		cin >> a[i];
	}
	trung_binh_cong(a, n);
	// tra ve gia tri lon nhat
	cout << "gia tri lon nhat : " << maxArray(a, n);
	cout << "gia tri nho nhat : " << minArray(a, n);
	ham_tra_ve_scp(a, n);
	tra_ve_so_nguyen_to(a, n);
	// thay_the(a, n);
	sau_khi_xoa(a, n);
	sortArray1(a, n);
	sortMrray(a, n);
	return 0;
} */


// tim so lon nhat nho nhat - so lon thu 2 - so be thu 2
/*#include<iostream>
using namespace std;
int maxArray(int a[1000] , int n){ // in ra so lon nhat trong cac mang
	int max = a[0];
	for (int i =0 ;i <n ;i++){
		if ( max < a[i]){
			max = a[i];
		}
	}
	return max;
}
int minArray(int a[1000] , int n){ // in ra so be nhat mang
	int min = a[0];
	for (int i =0 ;i <n ;i++){
		if ( min > a[i]){
			min = a[i];
		}
	}
	return min;
}
// in ra vi tri thu 2 o trong mang <lonnhat>
int secondMaxArray(int a[1000] , int n){
	// dung thuat toan sap sep noi bot in ra vi tri theo thu tu tnag dan sau do se xuat hien vi tri lon nhat
	for (int i =0 ;i <n ;i++){
		for (int j = i ;j <n ;j++){
			if (a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << " so lon thu 2 o trong mang se la : " << a[5];
}


// in ta vi tri nho thu 2 o trong mang 
int secondMInArray(int a[1000] , int n){
	for (int i =0 ;i <n ;i++){
		for (int j = i ;j <n ;j++){
			if (a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout << " so nho thu 2 se la : " << a[1];
}
int main(){
	int n;
	cout << "nhap n : ";
	cin >> n;
	int a[1000];
	for (int i =0 ;i <n ;i++){
		cin >> a[i];
	}
	cout << "so lon nhat o trogn mang se la : " << maxArray(a,n) << endl;
	cout << "so nho thu 2 o trogn mang sela : " << minArray(a,n) << endl;
	secondMaxArray(a,n);
	secondMInArray(a,n);
	return 0;
} */




