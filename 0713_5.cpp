#include<iostream>

struct Candybar {
	char name[20];
	double weigh;
	int cal;
};

int main() {

	using namespace std;

	Candybar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "ĵ����� ��ǥ���� " << snack.name << "�̰�\n" << "�߷��� " << snack.weigh << "�̸�\n" << "Į�θ��� "
		<< snack.cal << "�Դϴ�." << endl;

	return 0;
}