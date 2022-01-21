#include<iostream>
#include<string>

using namespace std;

struct Pizza {
	string name;
	double pi;
	double weigh;
};

int main() {

	Pizza p;

	cout << "피자 회사의 이름을 입력하시오: ";
	getline(cin, p.name);
	cout << "피자의 지름을 입력하시오: ";
	cin >> p.pi;
	cout << "피자의 중량을 입력하시오: ";
	cin >> p.weigh;

	cout << "피자 회사의 이름은 " << p.name << "이고,\n" << "피자의 지름은 " << p.pi << "이며\n"
		<< "피자의 중량은 " << p.weigh << "입니다." << endl;

	return 0;
}