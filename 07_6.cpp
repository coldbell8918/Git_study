#include<iostream>
#include<array>

using namespace std;

const int Max = 5;

int Fill_array(double ar[], int n);
void Show_array(double ar[], int n);
void Reverse1_array(double ar[], int n);
void Reverse2_array(double ar[], int n);

int main() {

	double array[Max];
	int size = Fill_array(array, Max);

	Show_array(array, size);
	Reverse1_array(array, size);
	Show_array(array, size);
	Reverse2_array(array, size);
	Show_array(array, size);

	return 0;
}

int Fill_array(double ar[], int n) {
	
	int i;

	for (i = 0; i < n; i++) {
		cout << i + 1 << "�� �迭 ��: ";
		if (!(cin >> ar[i])) {
			cout << "�� �� �Է��ϼ̽��ϴ�.  �����մϴ�" << endl;
			break;
		}
	}
	return i;
}

void Show_array(double ar[], int n) {
	cout << "�迭�� �����ݴϴ�." << endl;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "�� �迭: " << ar[i] << endl;
	}
}

void Reverse1_array(double ar[], int n) {
	cout << "�迭�� ������ �ٲߴϴ�." << endl;
	for (int i = 0; i < n/2; i++) {
		double tmp;
		tmp = ar[i];
		ar[i] = ar[n - i-1];
		ar[n - i-1] = tmp;
	}
}

void Reverse2_array(double ar[], int n) {
	cout << "�迭�� ������ �ٲߴϴ�." << endl;
	for (int i = 1; i < n / 2; i++) {
		double tmp;
		tmp = ar[i];
		ar[i] = ar[n - i - 1];
		ar[n - i - 1] = tmp;
	}
}