#include<iostream>

int main() {

	using namespace std;

	double mile, gallon, km, lit;

	cout << "주행한 거리를 마일단위로 입력하시오: ";
	cin >> mile;
	cout << "소비한 휘발유의 양을 갤런단위로 입력하시오: ";
	cin >> gallon;
	cout << "갤런당 마일 수는 " << mile*1.0 / gallon << "입니다\n";

	cout << "주행한 거리를 킬로미터 단위로 입력하시오: ";
	cin >> km;
	cout << "소비한 휘발유의 양을 리터 단위로 입력하시오: ";
	cin >> lit;
	cout << "100km 당 리터 수는 " << km * 1.0 * lit / 100 << "입니다.";

	return 0;
}