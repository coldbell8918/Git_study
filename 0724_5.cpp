#include<iostream>
int main() {

	using namespace std;

	double tax;
	cout << "������ �Է��Ͻÿ�: ";
	cin >> tax;
	while (tax > 0 && cin) {
		if (tax <= 5000) { 
			tax = 0;
			cout << tax << "Ʈ������ ������ ���ž� �մϴ�\n";
		}
		else if (tax > 5000 && tax <= 15000) {
			tax -= 5000;
			tax *= 0.1;
			cout << tax << "Ʈ������ ������ ���ž� �մϴ�\n";
		}
		else if (tax > 15000 && tax <= 35000) {
			tax -= 15000;
			tax *= 0.15;
			tax += 1000;
			cout << tax << "Ʈ������ ������ ���ž� �մϴ�\n";
		}
		else if (tax > 35000) {
			tax -= 35000;
			tax *= 0.2;
			tax += 4000;
			cout << tax << "Ʈ������ ������ ���ž� �մϴ�\n";
		}
		cout << "������ �Է��Ͻÿ�: ";
		cin >> tax;
	}
	return 0;
}