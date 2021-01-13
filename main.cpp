#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int main(int argc, char** argv) {
//	return 0;
//}
//#include <errno.h>

int nhap_so_nguyen() {
	int n;
	cout << "Nhap so nguyen = ";
	cin >> n;
	return n;
}

int nhap_so_nguyen_duong() {
	float n;
	cout << "Nhap so nguyen duong = ";
	cin >> n;
	int remainder = n / 1;
	while (n <= 0 || (n > 0 && remainder * 1 != n)) {//check not number
		cout << "Nhap lai = ";
		cin >> n;
	}
	return n;
}
void hien_thi_vector_so_nguyen(vector<int> v) {
	for(int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << ", ";
	}
	cout << v[v.size() - 1] << endl;
}

int Bai1(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		S += i;
	}
	return S;
}

int Bai2(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		S += i * i;
	}
	return S;
}

float Bai3(int n) {
	float S = 0;
	for(int i = 1; i <= n; i++) {
		S += 1.0 / i;
	}
	return S;
}

float Bai4(int n) {
	float S = 0;
	for(int i = 2; i <= 2 * n; i += 2) {
		S += 1.0 / i;
//		cout << 1.0/i;
	}
	return S;
}

float Bai5(int n) {
	float S = 0;
	for(int i = 1; i <= 2 * n + 1; i += 2) {
		S += 1.0 / i;
	}
	return S;
}

float Bai6(int n) {
	float S = 0;
	for(int i = 1; i <= n; i++) {
		S += 1.0 / (i * (i + 1));
	}
	return S;
}

float Bai7(int n) {
	float S = 0;
	for(int i = 1; i <= n; i++) {
		S += 1.0 * i / (i + 1);
	}
	return S;
}

float Bai8(int n) {
	float S = 0;
	for(float i = 1; i <= n; i += 2) {
		S += i / (i + 1);
		cout << i << endl;
	}
	return S;
}

unsigned int Bai9(int n) {
	unsigned int T = 1;
	for(int i = 2; i <= n; i++) {
		T *= i;
	}
	return T;
}

float Bai10(int x, int n) {
	float T = 1;
	if(n == 0) {
		return 1;
	}
	else {
		int positiveN = n;
		if(n < 0) {
			positiveN = (-1) * n;
		}
		for(int i = 1; i <= positiveN; i++) {
			T *= x;
		}
		if(n > 0) return T;
		return 1.0 / T;
	}
}

unsigned int Bai11(int n) {
	unsigned int S = 0, term;
	for(int i = 1; i <= n; i++) {
		term = 1;
		for(int j = 1; j <= i; j ++) {
			term *= j;
		}
		S += term;
	}
	return S;
}

unsigned int Bai12(int x, int n) {
	unsigned int S = 0;
	int term;
	for(int i = 1; i <= n; i++) {
		term = 1;
		for(int j = 1; j <= i; j++) {
			term *= x;
		}
		S += term;
	}
	return S;
}

unsigned int Bai13(int x, int n) {
	unsigned int S = 0;
	int term;
	for(int i = 2; i <= 2 * n; i += 2) {
		term = 1;
		for(int j = 1; j <= i; j++) {
			term *= x;
		}
		S += term;
	}
	return S;
}

unsigned int Bai14(int x, int n) {
	unsigned int S = 0;
	int term;
	for(int i = 1; i <= 2 * n + 1; i += 2) {
		term = 1;
		for(int j = 1; j <= i; j++) {
			term *= x;
		}
		S += term;
	}
	return S;
}

float Bai15(int n) {
	float S = 0;
	int termDenominator;
	for(int i = 1; i <= n; i++) {
		termDenominator = 0;
		for(int j = 1; j <= i; j++) {
			termDenominator += j;
		}
		S += 1.0 / termDenominator;
	}
	return S;
}

float Bai16(int x, int n) {
	float S = 0;
	int termNumerator, termDenominator;
	for(int i = 1; i <= n; i++) {
		termNumerator = 1;
		termDenominator = 0;
		for(int j = 1; j <= i; j++) {
			termNumerator *= x;
			termDenominator += j;
		}
		S += 1.0 * termNumerator / termDenominator;
	}
	return S;
}

float Bai17(int x, int n) {
	float S = 0, termNumerator, termDenominator;
	for(int i = 1; i <= n; i++) {
		termNumerator = 1;
		termDenominator = 1;
		for(int j = 1; j <= i; j++) {
			termNumerator *= x;
			termDenominator *= j;
		}
		S += termNumerator / termDenominator;
	}
	return S;
}

float Bai18(int x, int n) {
	float S = 1, termNumerator, termDenominator;
	for(int i = 2; i <= 2 * n; i += 2) {
		termNumerator = 1;
		termDenominator = 1;
		for(int j = 1; j <= i; j++) {
			termNumerator *= x;
			termDenominator *= j;
		}
	}
	return S;
}

float Bai19(int x, int n) {
	float S = 1, termNumerator, termDenominator;
	for(int i = 1; i <= 2 * n; i += 2) {
		termNumerator = 1;
		termDenominator = 1;
		for(int j = 1; j <= i; j++) {
			termNumerator *= x;
			termDenominator *= j;
		}
	}
	return S;
}

vector<int> Bai20_TraVe(int n) {
	vector<int> result;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			result.push_back(i);
		}
	}
	return result;
}

void Bai20_LietKe(int n) {
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			cout << i << ", ";
		}
	}
}

int Bai21(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			S += i;
		}
	}
	return S;
}

int Bai22(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			S *= i;
		}
	}
	return S;
}

int Bai23(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(n % i == 0) {
			count += 1;
		}
	}
	return count;
}

void Bai24_LietKe(int n) {
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 != 0)) {
			cout << i << ", ";
		}
	}
}

vector<int> Bai24_TraVe(int n) {
	vector<int> result;
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 != 0)) {
			result.push_back(i);
		}
	}
	return result;
}

int Bai25(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 == 0)) {
			S += i;
		}
	}
	return S;
}

int Bai26(int n) {
	int S = 0;
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 != 0)) {
			S *= i;
		}
	}
	return S;
}

int Bai27(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if((n % i == 0) && (i % 2 == 0)) {
			count += 1;
		}
	}
	return count;
}

int Bai28(int n) {
	int S = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			S += i;
		}
	}
	return S;
}

int Bai29(int n) {
	int result;
	int i = n - 1;
	if (i % 2 == 0) {
		i -= 1;
	}
	while (n % i != 0) {
		i -= 2;
	}
	return i;
}

int Bai30(int n) {
	int S = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			S += i;
		}
	}
	if (S == n) return 1;
	return 0;
} 

int Bai31(int n) {
	if (n == 1) return 0;
	for(int i = 2; i <= (int)sqrt(n); i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int Bai32(int n) {
	float remainder = sqrt(n) / 1;
	if(1 * remainder == remainder) return 1;
	return 0;
}

float Bai33_dequy(int n) {
	float S = 0.0;
	if(n <= 0) {
		return 0;
	}
	if(n == 1) {
		return sqrt(2);
	}
	return sqrt(Bai33_dequy(n - 1) + 2);
}

float Bai33(int n) {
	float S = 0;
	if(n <= 0) {
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		cout << S << " + " << 2 << " = ";
		S = sqrt(S + 2);
//		S += 2;
//		S = sqrt(S);
		cout << S << endl;
	}
	return S;
}

float Bai34(int n) {
	float S = 0;
	if(n <= 0) {
		return 0;
	}
	for(int i = 1; i <= n; i++) {
		cout << S << " + " << i << " = ";
		S = sqrt(S + i);
//		S += i;
//		S = sqrt(S);
		cout << S << endl;
	}
	return S;
}

float Bai34_dequy(int n) {
	float S = 0;
	if(n <= 0) return 0;
	if(n == 1) return 1;
	return sqrt(Bai34_dequy(n - 1) + n);
}

float Bai35(int n) {
	float S = 0;
	if(n <= 0) return 0;
	for(int i = n; i >= 1; i--) {
		cout << S << " + " << i << " = ";
		S = sqrt(S + i);
		cout << S << endl;
	}
	return S;
}

float Bai36(int n) {
	float S = 0;
	int iGiaiThua = 1;
	if(n < 0) return 0;
	if(n == 0) return 1;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			iGiaiThua *= j;
		}
		S = sqrt(S + iGiaiThua);
	}
	return S;
}



int main() {
//	int n;
//	n = nhap_so_nguyen_duong();
//	cout << n;
	
	while (1) {
		int choice;
		cout << "\nNhap STT bai toan hoac 0 de thoat." << endl;
		cin >> choice;
		if(choice == 0) {
			break;
		}
		else {
			int n, x;
			switch(choice) {
				case 1:
					n = nhap_so_nguyen();
					cout << "S = " << Bai1(n) << endl;
					break;
				case 2:
					n = nhap_so_nguyen();
					cout << "S = " << Bai2(n) << endl;
					break;
				case 3:
					n = nhap_so_nguyen();
					cout << "S = " << Bai3(n) << endl;
					break;
				case 4:
					n = nhap_so_nguyen();
					cout << "S = " << Bai4(n) << endl;
					break;
				case 5:
					n = nhap_so_nguyen();
					cout << "S = " << Bai5(n) << endl;
					break;
				case 6:
					n = nhap_so_nguyen();
					cout << "S = " << Bai6(n) << endl;
					break;
				case 7:
					n = nhap_so_nguyen();
					cout << "S = " << Bai7(n) << endl;
					break;
				case 8:
					n = nhap_so_nguyen();
					cout << "S = " << Bai8(n) << endl;
					break;
				case 9:
					n = nhap_so_nguyen();
					cout << "T = " << Bai9(n) << endl;
					break;
				case 10:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai10(x, n) << endl;
					break;
				case 11:
					n = nhap_so_nguyen();
					cout << "S = " << Bai11(n) << endl;
					break;
				case 12:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai12(x, n) << endl;
					break;
				case 13:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai13(x, n) << endl;
					break;
				case 14:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai14(x, n) << endl;
					break;
				case 15:
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai15(n) << endl;
					break;
				case 16:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai16(x, n) << endl;
					break;
				case 17:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai17(x, n) << endl;
					break;
				case 18:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai18(x, n) << endl;
					break;
				case 19:
					cout << "x, ";
					x = nhap_so_nguyen();
					cout << "n, ";
					n = nhap_so_nguyen();
					cout << "T = " << Bai19(x, n) << endl;
					break;
				case 20:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						//Bai20_LietKe(n);
						vector<int> result;
						result = Bai20_TraVe(n);
						hien_thi_vector_so_nguyen(result);
					}
					break;
				case 21:
					cout << "n, ";
					n = nhap_so_nguyen_duong();
					cout << "S = " << Bai21(n) << endl;
					break;
				case 22:
					cout << "n, ";
					n = nhap_so_nguyen_duong();
					cout << "S = " << Bai22(n) << endl;
					break;
				case 23:
					cout << "n, ";
					n = nhap_so_nguyen_duong();
					cout << "S = " << Bai23(n) << endl;
					break;
				case 24:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						//Bai24_LietKe(n);
						vector<int> result;
						result = Bai24_TraVe(n);
						hien_thi_vector_so_nguyen(result);
					}
					break;
				case 25:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai25(n) << endl;
					}
					break;
				case 26:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai22(n) << endl;
					}
					break;
				case 27:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai27(n) << endl;
					}
					break;
				case 28:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai28(n) << endl;
					}
					break;
				case 29:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "Uoc so lon nhat = " << Bai29(n) << endl;
					}
					break;
				case 30:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						int kq = Bai30(n);
						if(kq == 1) {
							cout << "So hoan thien!" << endl; 
						}
						else {
							cout << "Khong la so hoan thien!" << endl;
						}
					}
					break;
				case 31:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						if(Bai31(n) == 0) {
							cout << "Khong phai so nguyen to." << endl;
						}
						else {
							cout << "La so nguyen to." << endl;
						}
					}
					break;
				case 32:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						if(Bai32(n) == 0) {
							cout << "Khong phai so chinh phuong." << endl;
						}
						else {
							cout << "La so chinh phuong." << endl;
						}
					}
					break;
				case 33:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai33(n) << endl;
					}
					break;
				case 34:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai34(n) << endl;
					}
					break;
				case 35:
					{
						cout << "n, ";
						n = nhap_so_nguyen_duong();
						cout << "S = " << Bai35(n) << endl;
					}
					break;
			}
		}
	};
	
}
