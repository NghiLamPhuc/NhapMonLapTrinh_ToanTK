/*
Bai 1
Viet chuong trinh tim so lon nhat trong ba so tu ban phim bang toan tu dieu kien

Tran Thi Huyen Nhu - C1601155
Nguyen Xuan Tuan - C1603116
*/
#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3, m;
	cout << "Nhap so thu 1 = ";
	cin >> n1;
	cout << "Nhap so thu 2 = ";
	cin >> n2;
	cout << "Nhap so thu 3 = ";
	cin >> n3;
	
    m = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
//    m = (n1 > n2)*n1 + (n1 < n2)*n2; // so sanh 2 so, = nhau chua xet dc
    cout << "So lon nhat = " << m << endl;
    
    
    system("pause");
	return 0;
}
