// bai5 _DIÊMXEPHANG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout  << "CHUONG TRINH XEP HANG TU DIEM\n";
	double diem;
	cout << "Nhap diem:"; cin >> diem;
	if (diem < 5) {
		cout << "yeu";

	} else if (diem <= 6) {
	
		cout << "TB";
	} else if (diem <8) {
	
		cout << "kha";
	} else { 
	
		cout << "GIOI";
	}
	return 0;
}

	

