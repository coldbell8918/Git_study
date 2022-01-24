#include<iostream>

using namespace std;

void Time(int h, int m);

int main() {
	int hour, minute;

	cout << "시간 값을 입력하시오: ";
	cin >> hour;
	cout << "분 값을 입력하시오: ";
	cin >> minute;
	Time(hour, minute);

	return 0;
}

void Time(int h, int m) {
	cout << "시각:" << h << ":" << m << endl;
}