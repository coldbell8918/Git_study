#include<iostream>
#include<cstring>
int main() {

	using namespace std;

	char firstname[20], lastname[20], allname[40];

	cout << "퍼스트 네임(이름)을 입력하시오: ";
	cin.getline(firstname,20);
	cout << "라스트 네임(성)을 입력하시오: ";
	cin.getline(lastname,20);
	strcpy(allname, lastname);
	strcat(allname, ", ");
	strcat(allname, firstname);
	cout << "하나의 문자열로 만들면: " << allname << endl;

	return 0;
}