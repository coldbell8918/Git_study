#include<iostream>

using namespace std;

float Tem(float c);

int main() {

	int sup;
	int hwa;
	cout << "섭씨온도를 입력하고 엔터 키를 누르십시오: ";
	cin >> sup;
	cout << "섭씨 " << sup << "도는 화씨로 " << Tem(sup) << "도입니다.";

	return 0;
}

float Tem(float c) {
	
	float f;
	f = 1.8 * c + 32.0;
	return f;
}