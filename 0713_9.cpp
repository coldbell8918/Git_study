#include<iostream>
#include<string>

using namespace std;

struct Candybar {
	string name;
	double weigh;
	int cal;
};

int main() {

	Candybar *snack1=new Candybar;
	snack1->name = "chocolate";
	snack1->weigh = 3.5;
	snack1->cal = 339;

	Candybar* snack2 = new Candybar;
	snack2->name = "vanila";
	snack2->weigh = 4.2;
	snack2->cal = 330;

	Candybar* snack3 = new Candybar;
	snack3->name = "berry";
	snack3->weigh = 5.1;
	snack3->cal = 400;

	cout << "캔디바의 상표명은 " << snack1->name << "이고\n중량은 " << snack1->weigh << "이며\n칼로리는 "
		<< snack1->cal << "입니다.\n\n";
	cout << "캔디바의 상표명은 " << snack2->name << "이고\n중량은 " << snack2->weigh << "이며\n칼로리는 "
		<< snack2->cal << "입니다.\n\n";
	cout << "캔디바의 상표명은 " << snack3->name << "이고\n중량은 " << snack3->weigh << "이며\n칼로리는 "
		<< snack3->cal << "입니다.\n\n";

	return 0;
}