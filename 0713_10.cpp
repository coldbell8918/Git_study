#include<iostream>
#include<array>

int main() {
	
	using namespace std;

	array<double, 3>t;
	
	cout << "40�ߵ� �޸��� 1�� ���: ";
	cin >> t[0];
	cout << "40�ߵ� �޸��� 2�� ���: ";
	cin >> t[1];
	cout << "40�ߵ� �޸��� 3�� ���: ";
	cin >> t[2];

	cout << "�� �޸��� Ƚ���� 3���̸�, ����� " << (t[0] + t[1] + t[2]) / 3 << "�Դϴ�";

	return 0;
}