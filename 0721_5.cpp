#include<iostream>
#include<string>
int main() {

	using namespace std;

	int books[12];
	int sum = 0;
	
	string year[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	
	for (int i = 0; i < 12; i++) {	
		cout << year[i] << "의 판매량을 입력하시오: ";
		cin >> books[i];
		sum += books[i];
	}

	cout << "연간 총 판매량은 " << sum << "권 입니다" << endl;

	return 0;
}