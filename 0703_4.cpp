#include<iostream>
using namespace std;

double Solar(double k);

int main() {

	double kwang;

	cout << "���� ���� �Է��ϰ� ����Ű�� �����ʽÿ�: ";
	cin >> kwang;

	cout << kwang << "���� " << Solar(kwang) << "õ�� �����Դϴ�. ";

	return 0;
}

double Solar(double k) {
	int c;
	c = k * 63240;

	return c;
}