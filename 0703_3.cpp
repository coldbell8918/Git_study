#include<iostream>

using namespace std;

float Tem(float c);

int main() {

	int sup;
	int hwa;
	cout << "�����µ��� �Է��ϰ� ���� Ű�� �����ʽÿ�: ";
	cin >> sup;
	cout << "���� " << sup << "���� ȭ���� " << Tem(sup) << "���Դϴ�.";

	return 0;
}

float Tem(float c) {
	
	float f;
	f = 1.8 * c + 32.0;
	return f;
}