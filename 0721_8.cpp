#include<iostream>
#include<cstring>

int main() {

	using namespace std;

	char word[30];
	int cnt = 0;

	cout << "���� �ܾ���� �Է��Ͻʽÿ�(�������� done�� �Է�):\n";

	do {
		cin >> word;
		cnt++;
	} while (strcmp(word, "done"));

	cout << "�� " << cnt-1 << " �ܾ �ԷµǾ����ϴ�." << endl; 

	return 0;
}