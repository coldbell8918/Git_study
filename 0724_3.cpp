#include<iostream>

int main() {

	using namespace std;

	char ch;
	
	cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n" << "s) soccer      b) basketball\n"
		<< "v) volleyball  g) golf" << endl;
	cin >> ch;

	while (ch!='q') {
		switch (ch) {
		case 's': cout << "�౸�� �߷� �ϴ� ��Դϴ�\n\n"; break;

		case 'b': cout << "�󱸴� ������ �ϴ� ��Դϴ�\n\n"; break;
		
		case 'v': cout << "�豸�� ü�¼Ҹ� ū ��Դϴ�\n\n"; break;

		case 'g': cout << "������ ����� ��Դϴ�\n\n"; break;
		
		default: cout << "�߸� �Է��ϼ̽��ϴ� �ٽ� �Է��ϼ���\n\n";
		}
		cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n" << "s) soccer      b) basketball\n"
			<< "v) volleyball  g) golf" << endl;
		cin >> ch;
	}
	return 0;
}