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

	cout << "Ű�� ��Ʈ�� ��ġ ������ �Է��Ͻÿ�: \n��Ʈ: ";
	cin >> feet;
	cout << "��ġ: ";
	cin >> inch;
	me = (feet * infe + inch) * mein;
	me2 = pow(me, 2);
	cout << "ü���� �Ŀ�� ������ �Է��Ͻÿ�: ";
	cin >> pound;
	kg = pound / 2.2;
	cout << "����� BMI�� " << kg / me2 << "�Դϴ�.";

	return 0;
}
