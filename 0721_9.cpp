#include<iostream>
#include<string>

int main() {

	using namespace std;

	string word;

	int cnt = 0;

	cout << "���� �ܾ���� �Է��Ͻʽÿ�(�������� done�� �Է�):\n";

	do {
		cin >> word;
		cnt++;
	} while (word!="done");

	cout << "�� " << cnt - 1 << " �ܾ �ԷµǾ����ϴ�." << endl;

	return 0;
}