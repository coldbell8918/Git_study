#include<iostream>
#include<string>

using namespace std;

struct Pizza {
	string name;
	double pi;
	double weigh;
};

int main() {

	Pizza p;

	cout << "���� ȸ���� �̸��� �Է��Ͻÿ�: ";
	getline(cin, p.name);
	cout << "������ ������ �Է��Ͻÿ�: ";
	cin >> p.pi;
	cout << "������ �߷��� �Է��Ͻÿ�: ";
	cin >> p.weigh;

	cout << "���� ȸ���� �̸��� " << p.name << "�̰�,\n" << "������ ������ " << p.pi << "�̸�\n"
		<< "������ �߷��� " << p.weigh << "�Դϴ�." << endl;

	return 0;
}