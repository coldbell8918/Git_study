#include<iostream>

using namespace std;

double jo(double a, double b);

int main() {

	int a, b;

	cout << " 두 수를 입력하세요: ";
	cin >> a >> b;

	while (a != 0 && b != 0) {
		cout << jo(a, b) << endl;
		cout << " 두 수를 입력하세요: ";
		cin >> a >> b;
	}

	return 0;
}
double jo(double a, double b) {
	return 2.0 * a * b / (a + b);
}