#include<iostream>

struct Candybar {
	char name[20];
	double weigh;
	int cal;
};

int main() {

	using namespace std;

	Candybar snack[3] = {
		{"chocolate", 3.5, 200},
		{"vanilla", 3.3, 250},
		{"berry", 2.8, 270}
	};
	for (int i = 0; i < 3; i++) {
		cout << "캔디바의 상표명은 " << snack[i].name << "입니다.\n"
			<< "중량은 " << snack[i].weigh << "입니다.\n"
			<< "칼로리는 " << snack[i].cal << "입니다.\n\n";
	}
	return 0;
}