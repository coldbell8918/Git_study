#include<iostream>
#include<string>

using namespace std;

struct Car {
	string carname;
	int year;
};

int main() {

	int num;
	cout << "몇대의 차를 목록으로 관리하시겠습니까? ";
	cin >> num;

	Car* motor = new Car[num];

	for (int i = 0; i < num; i++) {
		cout << "자동차 #" << i + 1 << ":\n제작업체: ";
		cin >> motor[i].carname;
		cout << "제작년도: ";
		cin >> motor[i].year;
	}
	cout << "귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
	for (int i = 0; i < num; i++) {
		cout << motor[i].year << "년형 " << motor[i].carname << endl;
	}

	return 0;
}