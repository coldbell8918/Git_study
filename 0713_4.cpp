#include<iostream>
#include<string>

int main() {

	using namespace std;

	string firstname, lastname, allname;

	cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�: ";
	getline(cin,firstname);
	cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
	getline(cin, lastname);
	allname = lastname;
	allname += ", ";
	allname += firstname;
	cout << "�ϳ��� ���ڿ��� �����: " << allname << endl;

	return 0;
}