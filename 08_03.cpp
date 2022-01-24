#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string big(string& sm);

int main() {

	string alpha;

	cout << "문자열을 입력하시오(끝내려면 q): ";
	getline(cin, alpha);
	while (alpha != "q") {
		cout << big(alpha) << endl;
		cout << "문자열을 입력하시오(끝내려면 q): ";
		getline(cin, alpha);
	}
	cout << "끝" << endl;

	return 0;
}

string big(string& sm) {
	for (int i = 0; i < sm.length(); i++) {
		sm[i] = toupper(sm[i]);
	}
	return sm;
}