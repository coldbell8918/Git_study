#include<iostream>
int main() {

	using namespace std;

	double tax;
	cout << "세금을 입력하시오: ";
	cin >> tax;
	while (tax > 0 && cin) {
		if (tax <= 5000) { 
			tax = 0;
			cout << tax << "트바프의 세금을 내셔야 합니다\n";
		}
		else if (tax > 5000 && tax <= 15000) {
			tax -= 5000;
			tax *= 0.1;
			cout << tax << "트바프의 세금을 내셔야 합니다\n";
		}
		else if (tax > 15000 && tax <= 35000) {
			tax -= 15000;
			tax *= 0.15;
			tax += 1000;
			cout << tax << "트바프의 세금을 내셔야 합니다\n";
		}
		else if (tax > 35000) {
			tax -= 35000;
			tax *= 0.2;
			tax += 4000;
			cout << tax << "트바프의 세금을 내셔야 합니다\n";
		}
		cout << "세금을 입력하시오: ";
		cin >> tax;
	}
	return 0;
}