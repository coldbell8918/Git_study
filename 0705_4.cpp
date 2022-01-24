#include<iostream>
#include<math.h>

int main() {

	using namespace std;

	long second;
	long Second;
	const long time_1 = 86400;
	const long time_2 = 3600;
	const long time_3 = 60;
	int day, hour, min, sec;
	cout << "초 수를 입력하시오: ";
	cin >> second;
	Second = second;
	day = second / time_1;
	second = second % time_1;
	hour = second / time_2;
	second = second % time_2;
	min = second / time_3;
	sec = second % time_3;
	cout << Second << "초 = " << day << "일, " << hour << "시간, " << min << "분, " << sec << "초" << endl;

	return 0;
}