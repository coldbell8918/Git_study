#include<iostream>

int main() {

	using namespace std;

	int key;
	int m;
	int cm;
	const int cm_m = 100;

	cout << " 키를 센티미터 단위로 입력하시오:___\b\b\b";
	cin >> key;
	m = key / cm_m;
	if (key < 100) {
		cm = key;
	}
	else {
		cm = key - m*cm_m;
	}
	cout << " 당신의 키는 " << m << "미터 " << cm << "센티미터입니다";



	return 0;
}