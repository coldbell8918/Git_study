#include<iostream>

int main() {

	using namespace std;

	long long all;
	long long some;
	double ratio;

	cout << "세계 인구수를 입력하시오: ";
	cin >> all;
	cout << "우리나라의 인구수를 입력하시오: ";
	cin >> some;
	ratio = some * 100.0 / all;
	cout << "세계 인구수에서 미국이 차지하는 비중은 " << ratio << "%이다." << endl;

	return 0;
}
