#include<iostream>
#include<string>

using namespace std;

struct donate {
	string name;
	double donation;
};

int main() {

	int num;
	int cnt = 0;

	cout << "����� ����� ����Դϱ�?: ";
	cin >> num;
	donate* d = new donate[num];
	for (int i = 0; i < num; i++) {
		cout << "�̸��� �ۼ��ϼ���: ";
		cin >> d[i].name;
		cout << "��α��� �Է��ϼ���: ";
		cin >> d[i].donation;
		cout << endl;
	}
	cout << "��ױ����" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation >= 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "����ڰ� �����ϴ�" << endl;
	}
	cnt = 0;
	cout << "�Ҿױ����" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation < 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "����ڰ� �����ϴ�" << endl;
	}
	return 0;
}