#include<iostream>
int main() {

	using namespace std;

	int num;

	cout << "출력할 행 수를 입력하시오: ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (j >= num-i-1) {
				cout << "*";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}

	return 0;
}