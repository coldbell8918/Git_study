#include<iostream>
#include<array>

int main() {
	
	using namespace std;

	array<double, 3>t;
	
	cout << "40야드 달리기 1차 결과: ";
	cin >> t[0];
	cout << "40야드 달리기 2차 결과: ";
	cin >> t[1];
	cout << "40야드 달리기 3차 결과: ";
	cin >> t[2];

	cout << "총 달리기 횟수는 3번이며, 평균은 " << (t[0] + t[1] + t[2]) / 3 << "입니다";

	return 0;
}