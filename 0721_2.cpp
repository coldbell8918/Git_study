#include<iostream>
#include<array>

using namespace std;

const int Arsize = 16;

int main() {

	array<long double, 16> fac;

	fac[0] = fac[1] = 1.0;

	for (int i = 2; i < 16; i++) {
		fac[i] = i * fac[i - 1];
	}

	for (int i = 0; i < 16; i++) {
		cout << i << "!은 " << fac[i] << "입니다" << endl;
	}

	return 0;
}