#include<iostream>
#include<string>

using namespace std;

struct Candybar {
	string name;
	double weigh;
	int cal;
};

void set(Candybar& target,string pt= "Millenium Munch",double w= 2.85, int c= 350);
void show(Candybar& target);

int main() {

	Candybar one;

	set(one);
	show(one);
	set(one, "jong chan", 74.2, 181);
	show(one);

	return 0;
}

void set(Candybar& target, string pt, double w, int c) {
	target.name=pt;
	target.weigh = w;
	target.cal = c;
}

void show(Candybar& target) {
	cout << "��ǥ��: " << target.name << endl;
	cout << "�߷�: " << target.weigh << endl;
	cout << "Į�θ�: " << target.cal << endl;
}