#include<iostream>

using namespace std;

void fun(const char *str,int n=0);
int cnt = 0;

int main() {

	char arr[20];
	cout << "문자열을 입력하세요: ";
	cin >> arr;

	fun(arr);
	fun(arr);
	fun(arr,4);

	return 0;
}

void fun(const char* str, int n) {
	cout << str << endl;
	if (!n) {
		for (int i = 0; i < cnt; i++) {
			cout << str << endl;
		}
	}
	cnt++;
}