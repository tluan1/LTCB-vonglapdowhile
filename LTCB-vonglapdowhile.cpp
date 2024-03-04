#include <iostream>
using namespace std;
int main() {
	int sodau, socuoi, tong = 0;
	int temp;
	cout << "nhap so dau : "; cin >> sodau;
	cout << "nhap so cuoi : "; cin >> socuoi;
	
	cout << "vong lap while\n";
	while (sodau <= socuoi) {
		cout << sodau << " ";
		tong = tong + sodau;
		sodau++;
	}
	cout << "\ntong = " << tong;
	tong += (sodau, socuoi);

	cout << "\nvong lap do while\n";
	do {
		cout << sodau << " ";
		tong = tong + sodau;
		sodau++;
	} while (sodau <= socuoi);
	return 0;
}