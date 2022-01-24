#include<iostream>

int main() {

	using namespace std;

	double whi, gal;
	cout << "휘발유 소비량을 100킬로미터 당 리터 수로 입력하시오: ";
	cin >> whi;
	gal = whi / 3.875;
	cout << "갤런당 마일수는 " << 62.14 * 1.0 / gal << "이다." << endl;

	return 0;
}