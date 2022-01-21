#include<iostream>

int main() {

	using namespace std;

	double a = 100000.0, b=100000.0;
	
	int cnt = 0;


	while (a >= b) {
		a += 100000*0.1;
		b *= 1.05;
		cnt++;
	}

	cout << "B의 투자가치가 높아지는 년수는 " << cnt << "년이고\n" << "그때 A의 투자가치는 " << a << "원, "
		<< "B의 투자가치는 " << b << "원입니다." << endl;

	return 0;
}


