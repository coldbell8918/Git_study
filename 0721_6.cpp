#include<iostream>
#include<string>

int main() {

	using namespace std;

	int books[3][12];
	int sum[3] = {};

	string year[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 12; i++) {
			cout << year[i] << "의 판매량을 입력하시오: ";
			cin >> books[j][i];
			sum[j] += books[j][i];
		}
		cout << "연간 총 판매량은 " << sum[j] << "권 입니다" << endl;
	}
	
	cout << "2년쨰 누적 판매량은 " << sum[0] + sum[1] << "권 이고 3년쨰 누적 판매량은 " << sum[0] + sum[1] + sum[2]
		<< "권 입니다. " << endl;

	return 0;
}