#include<iostream>

int main() {

	using namespace std;

	double mile, gallon, km, lit;

	cout << "������ �Ÿ��� ���ϴ����� �Է��Ͻÿ�: ";
	cin >> mile;
	cout << "�Һ��� �ֹ����� ���� ���������� �Է��Ͻÿ�: ";
	cin >> gallon;
	cout << "������ ���� ���� " << mile*1.0 / gallon << "�Դϴ�\n";

	cout << "������ �Ÿ��� ų�ι��� ������ �Է��Ͻÿ�: ";
	cin >> km;
	cout << "�Һ��� �ֹ����� ���� ���� ������ �Է��Ͻÿ�: ";
	cin >> lit;
	cout << "100km �� ���� ���� " << km * 1.0 * lit / 100 << "�Դϴ�.";

	return 0;
}