#include<iostream>
#include<string>

using namespace std;

struct Car {
	string carname;
	int year;
};

int main() {

	int num;
	cout << "����� ���� ������� �����Ͻðڽ��ϱ�? ";
	cin >> num;

	Car* motor = new Car[num];

	for (int i = 0; i < num; i++) {
		cout << "�ڵ��� #" << i + 1 << ":\n���۾�ü: ";
		cin >> motor[i].carname;
		cout << "���۳⵵: ";
		cin >> motor[i].year;
	}
	cout << "���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";
	for (int i = 0; i < num; i++) {
		cout << motor[i].year << "���� " << motor[i].carname << endl;
	}

	return 0;
}