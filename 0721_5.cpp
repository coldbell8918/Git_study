#include<iostream>
#include<string>
int main() {

	using namespace std;

	int books[12];
	int sum = 0;
	
	string year[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	
	for (int i = 0; i < 12; i++) {	
		cout << year[i] << "�� �Ǹŷ��� �Է��Ͻÿ�: ";
		cin >> books[i];
		sum += books[i];
	}

	cout << "���� �� �Ǹŷ��� " << sum << "�� �Դϴ�" << endl;

	return 0;
}