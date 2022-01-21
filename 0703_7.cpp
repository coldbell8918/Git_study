#include<iostream>
int main() {

	using namespace std;

	double mile;
	double kilo;

	cout << "거리를 마일 단위로 입력하시오: ";
	cin >> mile;
	cout << mile << "마일은 " << mile * 1.60934 << "킬로미터입니다. ";

	return 0;
}