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
	cout << "\n골프 점수의 평균은 " << average(score, size) << "입니다." << endl;

	return 0;
}

int fill_arr(double arr[], int limit) {
	double score;
	int i;
	for (i = 0; i < limit; i++) {
		cout << i + 1 << "번 골프 점수(종료시 0): ";
		cin >> score;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "입력불량; 입력과정을 끝내겠습니다.\n";
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