#include<iostream>

using namespace std;

double fac(unsigned n);

int main() {

	unsigned number;

	cout << "정수를 입력하세요(종료하려면 q입력): ";

	while (cin >> number) {
		cout << number << "의 계승은 " << fac(number) << "입니다\n";
		cout << "정수를 입력하세요(종료하려면 q입력): ";
	}

	return 0;
}

double fac(unsigned n) {
	if (!n) {
		return 1;
	}
	else{
		return n*fac(n - 1);
	}
}