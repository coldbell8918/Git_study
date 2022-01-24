#include<iostream>
#include<string>

int main() {

	using namespace std;

	string word;

	int cnt = 0;

	cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

	do {
		cin >> word;
		cnt++;
	} while (word!="done");

	cout << "총 " << cnt - 1 << " 단어가 입력되었습니다." << endl;

	return 0;
}