#include<iostream>
#include<string>

int main() {

	using namespace std;

	string firstname, lastname;
	char score;
	char score2;
	int age;

	cout << "\BF\B5\B9\AE \C6۽\BAƮ \B3\D7\C0\D3(\C0̸\A7): ";
	cout << "hi coldbell";
	getline(cin, firstname);
	cout << "\BF\B5\B9\AE \B6\F3\BD\BAƮ \B3\D7\C0\D3(\BC\BA): ";
	getline(cin, lastname);
	cout << "\C7л\FD\C0\CC \BF\F8\C7ϴ\C2 \C7\D0\C1\A1: ";
	cin >> score;
	score2 = score + 1;
	cout << "\B3\AA\C0\CC: ";
	cin >> age;
	cout << "\BC\BA\B8\ED: " << lastname << ", " << firstname << "\n\C7\D0\C1\A1: " << score2 << "\n\B3\AA\C0\CC: " << age << endl;

	return 0;
}
