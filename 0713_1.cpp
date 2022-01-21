#include<iostream>
#include<string>

int main() {

	using namespace std;

	string firstname, lastname;
	char score;
	char score2;
	int age;

	cout << "영문 퍼스트 네임(이름): ";
	getline(cin, firstname);
	cout << "영문 라스트 네임(성): ";
	getline(cin, lastname);
	cout << "학생이 원하는 학점: ";
	cin >> score;
	score2 = score + 1;
	cout << "나이: ";
	cin >> age;
	cout << "성명: " << lastname << ", " << firstname << "\n학점: " << score2 << "\n나이: " << age << endl;

	return 0;
}