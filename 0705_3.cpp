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

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�" << endl;
	cout << " ����, ������ �Է��Ͻÿ�: ";
	cin >> ang;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> min;
	min_ = min / angle;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> sec;
	sec_ = sec / pow(angle, 2);
	we = ang + min_ + sec_;

	cout << ang << "��, " << min << "��, " << sec << "�� = " << we << "��" << endl;



	return 0;
}