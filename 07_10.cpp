#include<iostream>

using namespace std;

double add(double x, double y);
double multi(double x, double y);
double calculate(double x, double y, double(*pf)(double,double));

int main() {
	double a, b;

	cout << "�� ���� �Է��Ͻÿ�(����� q): ";

	while ((cin >> a >> b)) {
		cout << "�� ���� ��: "<< calculate(a, b, add) << endl;
		cout << "�� ���� ��: "<< calculate(a, b, multi)<< endl;
		cout << "�� ���� �Է��Ͻÿ�(����� q): ";
	}

	return 0;
}

double add(double x, double y) {
	return x + y;
}

double multi(double x, double y) {
	return x * y;
}

double calculate(double x, double y, double (*pf)(double,double)) {
	return (*pf)(x, y);
}