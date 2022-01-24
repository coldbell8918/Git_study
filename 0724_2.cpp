#include<iostream>
#include<cctype>


int main() {

	using namespace std;

	double donate[10];
	int i=0;
	double sum = 0;
	double average;

	cout << "기부금을 입력하시오:\n";

	for (; i < 10 ; i++) {
		if (!(cin >> donate[i])) {
			break;
		}; 
		sum += donate[i];		
	}

	average = sum / i;
	int cnt = 0;

	for (int j = 0; j < i + 1; j++) {
		if (donate[j] > average) {
			cnt++;
		}
	}

	cout << "기부금들의 평균은 " << average << "원 이고 평균보다 큰 기부금은 배열에 " << cnt << "개 있습니다" << endl;

	return 0;
}
