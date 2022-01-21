#include<iostream>
#include<math.h>

int main() {

	using namespace std;

	const int angle = 60;
	int ang;
	float min;
	float min_;
	int sec;
	float sec_;
	float we;

	cout << "위도를 도, 분, 초 단위로 입력하시오" << endl;
	cout << " 먼저, 도각을 입력하시오: ";
	cin >> ang;
	cout << "다음에, 분각을 입력하시오: ";
	cin >> min;
	min_ = min / angle;
	cout << "끝으로, 초각을 입력하시오: ";
	cin >> sec;
	sec_ = sec / pow(angle, 2);
	we = ang + min_ + sec_;

	cout << ang << "도, " << min << "분, " << sec << "초 = " << we << "도" << endl;



	return 0;
}