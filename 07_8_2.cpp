#include<iostream>

using namespace std;

const int seasons = 4;
const char* sname[seasons] = { "Spring", "Summer", "Fall","Winter" };

struct expense {
	double money[seasons];
};

void fill(expense *pa);
void show(expense da);

int main() {

	expense four;

	fill(&four);
	show(four);

	return 0;
}

void fill(expense *pa) {
	for (int i = 0; i < seasons; i++) {
		cout << sname[i] << "에 소요되는 비용: ";
		cin >> pa->money[i];
	}
}

void show(expense da) {
	double total = 0.0;
	cout << "\n계절 별 비용\n";
	for (int i = 0; i < seasons; i++) {
		cout << sname[i] << ": $" << da.money[i] << endl;
		total += da.money[i];
	}
	cout << "총 비용: $" << total << endl;
}