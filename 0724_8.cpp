#include<iostream>
#include<fstream>
#include<cstdlib>

int main() {

	using namespace std;
	char filename[30];
	ifstream inFile;
	cout << "데이터 파일의 이름을 입력하십시오: ";
	cin.getline(filename, 30);
	inFile.open(filename);
	
	if (!inFile.is_open()) {
		cout << "파일을 열수 없습니다.\n프로그램을 종료합니다.\n";
		exit(EXIT_FAILURE);
	}

	char ch;
	int cnt = 0;

	inFile >> ch;

	while (inFile.good()) {
		cnt++;
		inFile >> ch;
	}
	if (inFile.eof()) {
		cout << "파일 끝에 도달했습니다\n";
	}
	else if (inFile.fail()) {
		cout << "데이터 불일치로 입력이 종료되었습니다\n";
	}
	else {
		cout << "알 수 없는 이유로 입력이 종료되었습니다\n";
	}

	if (!cnt) {
		cout << "데이터가 없습니다\n";
	}
	else {
		cout << "읽은 문자의 수: " << cnt << endl;
	}

	return 0;
}