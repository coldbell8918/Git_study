#include<iostream>

struct Candybar {
	char name[20];
	double weigh;
	int cal;
};

int main() {

	using namespace std;

	Candybar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "캔디바의 상표명은 " << snack.name << "이고\n" << "중량은 " << snack.weigh << "이며\n" << "칼로리는 "
		<< snack.cal << "입니다." << endl;

	return 0;
}