#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct donate {
	string name;
	double donation;
};

int main() {

	int cnt = 0;
	char filename[30];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하십시오: ";
	cin.getline(filename, 30);
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "파일을 열수 없습니다.\n프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}
	
	int num;
	string name_1;
	
	(inFile >> num).get();

	cout << "기부할 사람의 수: " << num << endl;
	donate* d = new donate[num];
	for (int i = 0; i < num; i++) {
		getline(inFile, d[i].name);
		(inFile >> d[i].donation).get();
	}

	cout << "고액기부자" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation >= 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "기부자가 없습니다" << endl;
	}
	cnt = 0;
	cout << "소액기부자" << endl;
	for (int i = 0; i < num; i++) {
		if (d[i].donation < 10000) {
			cout << d[i].name << ": " << d[i].donation << endl;
			cnt++;
		}
	}
	if (!cnt) {
		cout << "기부자가 없습니다" << endl;
	}

	return 0;
}