#include<iostream>
#include<cstring>
int main() {

	using namespace std;

	char firstname[20], lastname[20], allname[40];

	cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�: ";
	cin.getline(firstname,20);
	cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
	cin.getline(lastname,20);
	strcpy(allname, lastname);
	strcat(allname, ", ");
	strcat(allname, firstname);
	cout << "�ϳ��� ���ڿ��� �����: " << allname << endl;

	return 0;
}