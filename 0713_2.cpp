#include<iostream>
#include<string>

int main() {
    
	using namespace std;
	string name, dessert;

	cout << "�̸��� �Է��Ͻÿ�: \n";
	getline(cin, name);
	cout << "�����ϴ� ����Ʈ�� �Է��Ͻÿ�: \n";
	getline(cin, dessert);
	cout << "���ִ� " << dessert << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "��!\n";

	return 0;
}