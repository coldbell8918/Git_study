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
		cout << "�������� �Է��Ͻʽÿ�: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "�� �� �Է��߽��ϴ�. ��ġ�� �Է��ϼ���: ";
		}
		revalue(factor,properties, pt_end);
		show_array(properties, pt_end);
	}
	cout << "���α׷��� �����մϴ�.\n";
	cin.get();
	cin.get();

	return 0;
}

double *fill_array(double* begin, double* end) {
	double temp;
	double *pt;
	for (pt = begin; pt < end; pt++) {
		cout << (pt - begin) + 1 << "�� �ε����� ����: $";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "�Էºҷ�; �Է� ������ �����ڽ��ϴ�.\n";
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
		cout << (pt - begin) + 1 << "�� �ε���: $";
		cout << *pt << endl;
	}
}

void revalue(double r,double* begin, double* end) {
	double* pt;
	for (pt = begin; pt < end; pt++) {
		*pt *= r;
	}
}