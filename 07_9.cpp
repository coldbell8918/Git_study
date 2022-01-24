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

	cout << "학급의 학생 수를 입력하시오: ";
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
	cout << "프로그램을 종료합니다.\n";

	return 0;
}

int getinfo(student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "학생의 이름을 입력하세요: ";
		if (!(cin.get(pa[i].fullname, SLEN))) { 
			return i; 
		}
		while (cin.get() != '\n') {
			continue;
		}
		cout << "학생의 취미를 입력하세요: ";
		cin >> pa[i].hobby;
		cout << "학생의 레밸을 입력하세요: ";
		cin >> pa[i].ooplevel;
		cin.get();
	}
}

void display1(student st) {
	cout << "학생의 이름: " << st.fullname << endl;
	cout << "학생의 취미: " << st.hobby << endl;
	cout << "학생의 레밸: " << st.ooplevel << endl;
}

void display2(const student* ps) {
	cout << "학생의 이름: " << ps->fullname << endl;
	cout << "학생의 취미: " << ps->hobby << endl;
	cout << "학생의 레밸: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "학생의 이름: " << pa[i].fullname << endl;
		cout << "학생의 취미: " << pa[i].hobby << endl;
		cout << "학생의 레밸: " << pa[i].ooplevel << endl;
	}
}