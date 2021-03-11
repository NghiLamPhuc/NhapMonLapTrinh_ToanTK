#include <iostream>

using namespace std;

//bai1: kw 101 tro di
float tinh_tinh_dien(int soKW)
{
	//gia su kw la so nguyen
	float thanhTien = 0;
	if(soKW > 0 && soKW <= 100)
	{
		thanhTien = soKW * 1000;
	}
	else if(soKW > 100)
	{
		thanhTien = 100000 + (soKW % 100) * 1500;
	}
	else
	{
		//soKW <= 0 => khong hop le
		thanhTien = 0;
	}
	return thanhTien;
}
//bai 2: sua doi 1 chut
void cam_thi(int soLT, int soTH, int vLT, int vTH)
{
	if((soLT * 0.2 < vLT) || (soTH * 0.2 < vTH))
	{
		cout << "Cam thi" << endl;
	}
	else
	{
		cout << "Duoc thi" << endl;
	}
	
}
//bai 3:
void dem_chan_le(int soNguyen)
{
	int demChan = 0, dem0 = 0, chieuDaiSoNguyen = 0;
	int phanDu;
	while(soNguyen > 0)
	{
		phanDu = soNguyen % 10;
		chieuDaiSoNguyen++;
		if(phanDu == 0) dem0++;
		else if(phanDu % 2 == 0) demChan++;
		soNguyen /= 10;
	}
	cout << "So chan: " << demChan << endl;
	cout << "So le: " << chieuDaiSoNguyen - demChan - dem0 << endl;
}
//bai 4

int main() {
	// Bai 1: don gia 1 = 1000, don gia 2 = 1500
//	int soKW = 102;
//	cout << "So tien dien la: " << tinh_tinh_dien(soKW) << endl;
	// Bai 2:
//	cam_thi(45, 30, 9, 7);
	// Bai 3
//	dem_chan_le(1230000132);
	
}
