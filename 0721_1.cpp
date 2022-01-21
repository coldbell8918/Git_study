#include<iostream>

using namespace std;

int main() {

	int a, b;
	int sum = 0;
	cout << "두개의 정수를 입력하시오: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << a << "부터 " << b << "까지의 합은 " << sum << "입니다" << endl;

	return 0;
}