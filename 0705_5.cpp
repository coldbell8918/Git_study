#include<iostream>

int main() {

	using namespace std;

	long long all;
	long long some;
	double ratio;

	cout << "���� �α����� �Է��Ͻÿ�: ";
	cin >> all;
	cout << "�츮������ �α����� �Է��Ͻÿ�: ";
	cin >> some;
	ratio = some * 100.0 / all;
	cout << "���� �α������� �̱��� �����ϴ� ������ " << ratio << "%�̴�." << endl;

	return 0;
}
