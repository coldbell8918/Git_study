#include<iostream>

int main() {

	using namespace std;

	double a = 100000.0, b=100000.0;
	
	int cnt = 0;


	while (a >= b) {
		a += 100000*0.1;
		b *= 1.05;
		cnt++;
	}

	cout << "B�� ���ڰ�ġ�� �������� ����� " << cnt << "���̰�\n" << "�׶� A�� ���ڰ�ġ�� " << a << "��, "
		<< "B�� ���ڰ�ġ�� " << b << "���Դϴ�." << endl;

	return 0;
}


