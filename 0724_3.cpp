#include<iostream>

int main() {

	using namespace std;

	char ch;
	
	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n" << "s) soccer      b) basketball\n"
		<< "v) volleyball  g) golf" << endl;
	cin >> ch;

	while (ch!='q') {
		switch (ch) {
		case 's': cout << "축구는 발로 하는 운동입니다\n\n"; break;

		case 'b': cout << "농구는 손으로 하는 운동입니다\n\n"; break;
		
		case 'v': cout << "배구는 체력소모가 큰 운동입니다\n\n"; break;

		case 'g': cout << "골프는 어려운 운동입니다\n\n"; break;
		
		default: cout << "잘못 입력하셨습니다 다시 입력하세요\n\n";
		}
		cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n" << "s) soccer      b) basketball\n"
			<< "v) volleyball  g) golf" << endl;
		cin >> ch;
	}
	return 0;
}