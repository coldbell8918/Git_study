#include<iostream>
#include<string>

using namespace std;

struct donate {
	string name;
	double donation;
};

int main() {

	int num;
	int cnt = 0;

	cout << "기부할 사람은 몇명입니까?: ";
	cin >> num;
	donate* d = new donate[num];
	for (int i = 0; i < num; i++) {
		cout << "이름을 작성하세요: ";
		cin >> d[i].name;
		cout << "기부금을 입력하세요: ";
		cin >> d[i].donation;
		cout << endl;
	}
	cout << "고액기부자" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation >= 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "기부자가 없습니다" << endl;
	}
	cnt = 0;
	cout << "소액기부자" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation < 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "기부자가 없습니다" << endl;
	}
	return 0;
}