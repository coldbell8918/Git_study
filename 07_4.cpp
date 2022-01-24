#include<iostream>

using namespace std;

long double pro(unsigned numbers1, unsigned picks, unsigned numbers2);

int main() {

	double total1, choice;
	long double total2;

	cout << "전체 수의 개수와 뽑을 수의 개수, 두번째 범위의 개수를 입력하시오: \n";

	while ((cin >> total1 >> choice >> total2) && choice <= total1) {
		cout << "당신이 이길 확률은 ";
		cout << pro(total1, choice, total2) << "번 중에서 한 번입니다.\n";
		cout << "다시 두 수를 입력하시오. (끝내려면 q를 입력): ";
	}

	cout << "프로그램을 종료합니다.\n";
	return 0;
}

long double pro(unsigned numbers1, unsigned picks, unsigned numbers2) {
	
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers1, p = picks; p > 0; n--, p--) {
		result *= n / p;
	}

	result *= numbers2;

	return result;
}