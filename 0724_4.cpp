#include<iostream>

using namespace std;

struct bop {
	char fullname[30];
	char title[30];
	char bopname[30];
	int preference;
};

int main() {

	bop b[5];
	
	b[0] = {
		"Park Jong Chan",
		"Cool guy",
		"Tommy",
		2
	};
	b[1] = {
		"Park Seung In",
		"Cute boy",
		"Sam",
		1
	};
	b[2] = {
		"Park Hyeong Ho",
		"Fancy boy",
		"Thomas",
		0
	};
	b[3] = {
		"Lee Sung Min",
		"Pretty girl",
		"Matilda",
		2
	};
	b[4] = {
		"Kwon Ki Hyun",
		"Handsome guy",
		"Tom",
		1
	};

	cout << "Benevolent Order of Programmers\na. �Ǹ����� ����      b. �������� ����\n"
		<< "c. Bop ���̵�� ����  d. ȸ���� ������ ������ ����\nq. ����" << endl;
	
	char ch; 
	cout << "���ϴ� ���� �����Ͻʽÿ�: ";
	cin >> ch;

	while (ch != 'q') {
		switch (ch) {
		case 'a': 
			for (int i = 0; i < 5; i++) {
				cout << b[i].fullname << endl;
			}
			break;
		case 'b': 
			for (int i = 0; i < 5; i++) {
				cout << b[i].title << endl;
			}
			break;
		case 'c': 
			for (int i = 0; i < 5; i++) {
				cout << b[i].bopname << endl;
			}
			break;
		case 'd': 
			for (int i = 0; i < 5; i++) {
				if (b[i].preference == 0) {
					cout << b[i].fullname << endl;
				}
				else if (b[i].preference == 1) {
					cout << b[i].title << endl;
				}
				else {
					cout << b[i].bopname << endl;
				}
			}
			break;
		default: cout << "�� �� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���\n";
		}
		cout << "���ϴ� ���� �����Ͻʽÿ�: ";
		cin >> ch;
	}
	cout << "���α׷��� �����մϴ�.";

	return 0;
}