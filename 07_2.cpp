#include<iostream>

using namespace std;

const int Max = 10;
int fill_arr(double arr[], int limit);
void show_arr(const double arr[], int n);
double average(double arr[], int n);

int main() {

	double score[Max];

	int size = fill_arr(score, Max);
	show_arr(score, size);
	cout << "\n���� ������ ����� " << average(score, size) << "�Դϴ�." << endl;

	return 0;
}

int fill_arr(double arr[], int limit) {
	double score;
	int i;
	for (i = 0; i < limit; i++) {
		cout << i + 1 << "�� ���� ����(����� 0): ";
		cin >> score;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "�Էºҷ�; �Է°����� �����ڽ��ϴ�.\n";
			break;
		}
		else if (score <= 0) {
			break;
		}
		arr[i] = score;
	}
	return i;
}

void show_arr(const double arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

double average(double arr[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum / n;
}