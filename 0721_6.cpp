#include<iostream>
#include<string>

int main() {

	using namespace std;

	int books[3][12];
	int sum[3] = {};

	string year[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 12; i++) {
			cout << year[i] << "�� �Ǹŷ��� �Է��Ͻÿ�: ";
			cin >> books[j][i];
			sum[j] += books[j][i];
		}
		cout << "���� �� �Ǹŷ��� " << sum[j] << "�� �Դϴ�" << endl;
	}
	
	cout << "2�⤊ ���� �Ǹŷ��� " << sum[0] + sum[1] << "�� �̰� 3�⤊ ���� �Ǹŷ��� " << sum[0] + sum[1] + sum[2]
		<< "�� �Դϴ�. " << endl;

	return 0;
}