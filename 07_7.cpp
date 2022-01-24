#include<iostream>

using namespace std;

const int Max = 5;

double *fill_array(double *begin, double *end);
void show_array(double* begin, double* end);
void revalue(double r, double* begin, double* end);

int main() {

	double properties[Max];
	double* pt_end = fill_array(properties, properties + Max);
	show_array(properties, pt_end);

	if ((pt_end)-properties > 0) {
		cout << "재평가율을 입력하십시오: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "잘 못 입력했습니다. 수치를 입력하세요: ";
		}
		revalue(factor,properties, pt_end);
		show_array(properties, pt_end);
	}
	cout << "프로그램을 종료합니다.\n";
	cin.get();
	cin.get();

	return 0;
}

double *fill_array(double* begin, double* end) {
	double temp;
	double *pt;
	for (pt = begin; pt < end; pt++) {
		cout << (pt - begin) + 1 << "번 부동산의 가격: $";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "입력불량; 입력 과정을 끝내겠습니다.\n";
			break;
		}
		else if (temp < 0) {
			break;
		}
		*pt = temp;
	}
	return pt;
}

void show_array(double* begin, double* end) {
	double* pt;
	for (pt = begin; pt < end; pt++) {
		cout << (pt - begin) + 1 << "번 부동산: $";
		cout << *pt << endl;
	}
}

void revalue(double r,double* begin, double* end) {
	double* pt;
	for (pt = begin; pt < end; pt++) {
		*pt *= r;
	}
}