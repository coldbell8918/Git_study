#include<iostream>
#include<string>

int main() {

	using namespace std;

	string firstname, lastname;
	char score;
	char score2;
	int age;

	cout << "���� �۽�Ʈ ����(�̸�): ";
	getline(cin, firstname);
	cout << "���� ��Ʈ ����(��): ";
	getline(cin, lastname);
	cout << "�л��� ���ϴ� ����: ";
	cin >> score;
	score2 = score + 1;
	cout << "����: ";
	cin >> age;
	cout << "����: " << lastname << ", " << firstname << "\n����: " << score2 << "\n����: " << age << endl;

	return 0;
}