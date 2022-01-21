#include<iostream>
#include<math.h>

int main() {

	using namespace std;

	float feet;
	float inch;
	float me;
	float pound;
	float kg;
	float bmi;
	float me2;
	const int infe = 12;
	const float mein = 0.0254;
	const float kgpo = 2.2;

	cout << "키를 피트와 인치 단위로 입력하시오: \n피트: ";
	cin >> feet;
	cout << "인치: ";
	cin >> inch;
	me = (feet * infe + inch) * mein;
	me2 = pow(me, 2);
	cout << "체중을 파운드 단위로 입력하시오: ";
	cin >> pound;
	kg = pound / 2.2;
	cout << "당신의 BMI는 " << kg / me2 << "입니다.";

	return 0;
}
