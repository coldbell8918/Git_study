#include<iostream>

int main() {

	using namespace std;

	int key;
	int m;
	int cm;
	const int cm_m = 100;

	cout << " Ű�� ��Ƽ���� ������ �Է��Ͻÿ�:___\b\b\b";
	cin >> key;
	m = key / cm_m;
	if (key < 100) {
		cm = key;
	}
	else {
		cm = key - m*cm_m;
	}
	cout << " ����� Ű�� " << m << "���� " << cm << "��Ƽ�����Դϴ�";



	return 0;
}