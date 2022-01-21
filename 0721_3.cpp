#include<iostream>
int main() {

	using namespace std;

	double sum = 0.0;
	double m;

	while (1) {
		cout << "수를 입력하시오: ";
		cin >> m;
		if (!m) {
			break;
		}
		sum += m;
		cout << sum << endl;
	}

	return 0;
}