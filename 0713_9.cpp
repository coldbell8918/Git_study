#include<iostream>
#include<string>

using namespace std;

struct Candybar {
	string name;
	double weigh;
	int cal;
};

int main() {

	Candybar *snack1=new Candybar;
	snack1->name = "chocolate";
	snack1->weigh = 3.5;
	snack1->cal = 339;

	Candybar* snack2 = new Candybar;
	snack2->name = "vanila";
	snack2->weigh = 4.2;
	snack2->cal = 330;

	Candybar* snack3 = new Candybar;
	snack3->name = "berry";
	snack3->weigh = 5.1;
	snack3->cal = 400;

	cout << "ĵ����� ��ǥ���� " << snack1->name << "�̰�\n�߷��� " << snack1->weigh << "�̸�\nĮ�θ��� "
		<< snack1->cal << "�Դϴ�.\n\n";
	cout << "ĵ����� ��ǥ���� " << snack2->name << "�̰�\n�߷��� " << snack2->weigh << "�̸�\nĮ�θ��� "
		<< snack2->cal << "�Դϴ�.\n\n";
	cout << "ĵ����� ��ǥ���� " << snack3->name << "�̰�\n�߷��� " << snack3->weigh << "�̸�\nĮ�θ��� "
		<< snack3->cal << "�Դϴ�.\n\n";

	return 0;
}