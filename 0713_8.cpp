#include<iostream>
#include<string>

using namespace std;


struct pizza {
	double pi;
	string name;
	double weigh;
};
int main() {

	pizza* p = new pizza;
	cout << "������ ������ �Է��Ͻÿ�: ";
	(cin >> p->pi).get();
	cout << "���� ȸ���� �̸��� �Է��Ͻÿ�: ";
	getline(cin, p->name);
	cout << "������ �߷��� �Է��Ͻÿ�: ";
	cin >> p->weigh;

	cout << "���� ȸ���� �̸��� " << p->name << "�̰�,\n" << "������ ������ " << p->pi << "�̸�\n"
		<< "������ �߷��� " << p->weigh << "�Դϴ�." << endl;

	return 0;
}