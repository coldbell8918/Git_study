#include<iostream>

struct Candybar {
	char name[20];
	double weigh;
	int cal;
};

int main() {

	using namespace std;

	Candybar snack[3] = {
		{"chocolate", 3.5, 200},
		{"vanilla", 3.3, 250},
		{"berry", 2.8, 270}
	};
	for (int i = 0; i < 3; i++) {
		cout << "ĵ����� ��ǥ���� " << snack[i].name << "�Դϴ�.\n"
			<< "�߷��� " << snack[i].weigh << "�Դϴ�.\n"
			<< "Į�θ��� " << snack[i].cal << "�Դϴ�.\n\n";
	}
	return 0;
}