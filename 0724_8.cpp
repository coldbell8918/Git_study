#include<iostream>
#include<fstream>
#include<cstdlib>

int main() {

	using namespace std;
	char filename[30];
	ifstream inFile;
	cout << "������ ������ �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(filename, 30);
	inFile.open(filename);
	
	if (!inFile.is_open()) {
		cout << "������ ���� �����ϴ�.\n���α׷��� �����մϴ�.\n";
		exit(EXIT_FAILURE);
	}

	char ch;
	int cnt = 0;

	inFile >> ch;

	while (inFile.good()) {
		cnt++;
		inFile >> ch;
	}
	if (inFile.eof()) {
		cout << "���� ���� �����߽��ϴ�\n";
	}
	else if (inFile.fail()) {
		cout << "������ ����ġ�� �Է��� ����Ǿ����ϴ�\n";
	}
	else {
		cout << "�� �� ���� ������ �Է��� ����Ǿ����ϴ�\n";
	}

	if (!cnt) {
		cout << "�����Ͱ� �����ϴ�\n";
	}
	else {
		cout << "���� ������ ��: " << cnt << endl;
	}

	return 0;
}