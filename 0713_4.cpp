#include<iostream>
#include<string>

int main() {

	using namespace std;

	string firstname, lastname, allname;

	cout << "퍼스트 네임(이름)을 입력하시오: ";
	getline(cin,firstname);
	cout << "라스트 네임(성)을 입력하시오: ";
	getline(cin, lastname);
	allname = lastname;
	allname += ", ";
	allname += firstname;
	cout << "하나의 문자열로 만들면: " << allname << endl;

	return 0;
}