#include<iostream>
using namespace std;

double Solar(double k);

int main() {

	double kwang;

	cout << "광년 수를 입력하고 엔터키를 누르십시오: ";
	cin >> kwang;

	cout << kwang << "년은 " << Solar(kwang) << "천문 단위입니다. ";

	return 0;
}

double Solar(double k) {
	int c;
	c = k * 63240;

	return c;
}