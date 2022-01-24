#include<iostream>

using namespace std;

const int seasons = 4;
const char* sname[seasons] = { "Spring", "Summer", "Fall","Winter" };

void fill(double* pa, int n);
void show(double da[], int n);

int main() {

	double expenses[seasons];
	fill(expenses,seasons);
	show(expenses,seasons);

	return 0;
}

void fill(double* pa, int n) {
	for (int i = 0; i < n; i++) {
		cout << sname[i] << "�� �ҿ�Ǵ� ���: ";
		cin >> pa[i];
	}
}

void show(double da[], int n) {
	double total = 0.0;
	cout << "\n���� �� ���\n";
	for (int i = 0; i < n; i++) {
		cout << sname[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "�� ���: $" << total << endl;
}