#include<iostream>

using namespace std;

double jo(double a, double b);

int main() {

	int a, b;

	cout << " �� ���� �Է��ϼ���: ";
	cin >> a >> b;

	while (a != 0 && b != 0) {
		cout << jo(a, b) << endl;
		cout << " �� ���� �Է��ϼ���: ";
		cin >> a >> b;
	}

	return 0;
}
double jo(double a, double b) {
	return 2.0 * a * b / (a + b);
}