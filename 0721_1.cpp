#include<iostream>

using namespace std;

int main() {

	int a, b;
	int sum = 0;
	cout << "�ΰ��� ������ �Է��Ͻÿ�: ";
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << a << "���� " << b << "������ ���� " << sum << "�Դϴ�" << endl;

	return 0;
}