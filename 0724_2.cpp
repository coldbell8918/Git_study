#include<iostream>
#include<cctype>


int main() {

	using namespace std;

	double donate[10];
	int i=0;
	double sum = 0;
	double average;

	cout << "��α��� �Է��Ͻÿ�:\n";

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

	cout << "��αݵ��� ����� " << average << "�� �̰� ��պ��� ū ��α��� �迭�� " << cnt << "�� �ֽ��ϴ�" << endl;

	return 0;
}
