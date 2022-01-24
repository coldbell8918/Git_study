#include<iostream>
#include<cctype>

int main() {

	using namespace std;

	char ch;

	cout << "텍스트를 입력하시오(종료: @):\n";

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
			cout << "숫자는 입력하시면 안됩니다\n";
		}
		cin.get(ch);
	}

	return 0;
}