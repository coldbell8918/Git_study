#include<iostream>

using namespace std;

void Time(int h, int m);

int main() {
	int hour, minute;

	cout << "�ð� ���� �Է��Ͻÿ�: ";
	cin >> hour;
	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> minute;
	Time(hour, minute);

	return 0;
}

void Time(int h, int m) {
	cout << "�ð�:" << h << ":" << m << endl;
}