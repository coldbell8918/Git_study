#include<iostream>

using namespace std;

double add(double x, double y);
double multi(double x, double y);
double calculate(double x, double y, double(*pf)(double,double));

int main() {
	double a, b;

	cout << "두 수를 입력하시오(종료시 q): ";

	while ((cin >> a >> b)) {
		cout << "두 수의 합: "<< calculate(a, b, add) << endl;
		cout << "두 수의 곱: "<< calculate(a, b, multi)<< endl;
		cout << "두 수를 입력하시오(종료시 q): ";
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