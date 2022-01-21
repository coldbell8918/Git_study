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

	cout << "Benevolent Order of Programmers\na. 실명으로 열람      b. 직함으로 열람\n"
		<< "c. Bop 아이디로 열람  d. 회원이 지정한 것으로 열람\nq. 종료" << endl;
	
	char ch; 
	cout << "원하는 것을 선택하십시오: ";
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
		default: cout << "잘 못 입력하셨습니다. 다시 입력하세요\n";
		}
		cout << "원하는 것을 선택하십시오: ";
		cin >> ch;
	}
	cout << "프로그램을 종료합니다.";

	return 0;
}