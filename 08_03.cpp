#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string big(string& sm);

int main() {

	string alpha;

	cout << "���ڿ��� �Է��Ͻÿ�(�������� q): ";
	getline(cin, alpha);
	while (alpha != "q") {
		cout << big(alpha) << endl;
		cout << "���ڿ��� �Է��Ͻÿ�(�������� q): ";
		getline(cin, alpha);
	}
	cout << "��" << endl;

	return 0;
}

string big(string& sm) {
	for (int i = 0; i < sm.length(); i++) {
		sm[i] = toupper(sm[i]);
	}
	return sm;
}