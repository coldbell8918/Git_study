#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct donate {
	string name;
	double donation;
};

int main() {

	int cnt = 0;
	char filename[30];
	ifstream inFile;
	cout << "������ ������ �̸��� �Է��Ͻʽÿ�: ";
	cin.getline(filename, 30);
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "������ ���� �����ϴ�.\n���α׷��� �����մϴ�.\n";
		exit(EXIT_FAILURE);
	}
	
	int num;
	string name_1;
	
	(inFile >> num).get();

	cout << "����� ����� ��: " << num << endl;
	donate* d = new donate[num];
	for (int i = 0; i < num; i++) {
		getline(inFile, d[i].name);
		(inFile >> d[i].donation).get();
	}

	cout << "��ױ����" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation >= 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "����ڰ� �����ϴ�" << endl;
	}
	cnt = 0;
	cout << "�Ҿױ����" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation < 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "����ڰ� �����ϴ�" << endl;
	}

	return 0;
}