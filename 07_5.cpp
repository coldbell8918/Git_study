#include<iostream>

using namespace std;

double fac(unsigned n);

int main() {

	unsigned number;

	cout << "������ �Է��ϼ���(�����Ϸ��� q�Է�): ";

	while (cin >> number) {
		cout << number << "�� ����� " << fac(number) << "�Դϴ�\n";
		cout << "������ �Է��ϼ���(�����Ϸ��� q�Է�): ";
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