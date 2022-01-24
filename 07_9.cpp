#include<iostream>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {

	cout << "�б��� �л� ���� �Է��Ͻÿ�: ";
	int class_size;
	cin >> class_size;
	
	while (cin.get() != '\n') {
		continue;
	}

	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}

	display3(ptr_stu, entered);
	cout << "���α׷��� �����մϴ�.\n";

	return 0;
}

int getinfo(student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "�л��� �̸��� �Է��ϼ���: ";
		if (!(cin.get(pa[i].fullname, SLEN))) { 
			return i; 
		}
		while (cin.get() != '\n') {
			continue;
		}
		cout << "�л��� ��̸� �Է��ϼ���: ";
		cin >> pa[i].hobby;
		cout << "�л��� ������ �Է��ϼ���: ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
}

void display1(student st) {
	cout << "�л��� �̸�: " << st.fullname << endl;
	cout << "�л��� ���: " << st.hobby << endl;
	cout << "�л��� ����: " << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout << "�л��� �̸�: " << ps->fullname << endl;
	cout << "�л��� ���: " << ps->hobby << endl;
	cout << "�л��� ����: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "�л��� �̸�: " << pa[i].fullname << endl;
		cout << "�л��� ���: " << pa[i].hobby << endl;
		cout << "�л��� ����: " << pa[i].ooplevel << endl;
	}
}