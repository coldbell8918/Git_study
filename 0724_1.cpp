#include<iostream>
#include<cctype>

int main() {

	using namespace std;

	char ch;

	cout << "�ؽ�Ʈ�� �Է��Ͻÿ�(����: @):\n";

	cin.get(ch);

	while (ch != '@') {
		if (isalpha(ch)) {
			if (ch > 64 && ch < 91) {
				ch += 32;
				cout << ch << endl;
			}
			else if (ch > 96 && ch < 123) {
				ch -= 32;
				cout << ch << endl;
			}
		}
		else if (isdigit(ch)) {
			cout << "���ڴ� �Է��Ͻø� �ȵ˴ϴ�\n";
		}
		cin.get(ch);
	}

	return 0;
}