#include<iostream>
#include<string>
#include<cctype>

int main() {

	using namespace std;

	string word;
	int ja = 0;
	int mo = 0;
	int ex = 0;

	cout << "단어들을 입력하시오(끝내려면 q)\n";

	while (cin >> word && word != "q") {
		if (isalpha(word[0])) {
			if (word[0] == 'a' || word[0] == 'A' || word[0] == 'e' || word[0] == 'E' || word[0] == 'o' ||
				word[0] == 'O' || word[0] == 'u' || word[0] == 'U' || word[0] == 'i' || word[0] == 'I') {
				mo++;
			}
			else {
				ja++;
			}
		}
		else {
			ex++;
		}
	}

	cout << "모음으로 시작하는 단어 수: " << mo << "\n자음으로 시작하는 단어 수: " << ja << "\n기타: " << ex << endl;


	return 0;
}