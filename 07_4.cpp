#include<iostream>

using namespace std;

long double pro(unsigned numbers1, unsigned picks, unsigned numbers2);

int main() {

	double total1, choice;
	long double total2;

	cout << "��ü ���� ������ ���� ���� ����, �ι�° ������ ������ �Է��Ͻÿ�: \n";

	while ((cin >> total1 >> choice >> total2) && choice <= total1) {
		cout << "����� �̱� Ȯ���� ";
		cout << pro(total1, choice, total2) << "�� �߿��� �� ���Դϴ�.\n";
		cout << "�ٽ� �� ���� �Է��Ͻÿ�. (�������� q�� �Է�): ";
	}

	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

long double pro(unsigned numbers1, unsigned picks, unsigned numbers2) {
	
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers1, p = picks; p > 0; n--, p--) {
		result *= n / p;
	}

	result *= numbers2;

	return result;
}