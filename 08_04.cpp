#include<iostream>
#include<cstring>
#include<string>

using namespace std;

struct stringy {
	char* str;
	int ct;
};

void set(stringy& tar, const char* ch);
void show(string tar, int n = 1);

int main() {

	stringy beany;
	char testing[] = "Reality isn't what it used to be";

	set(beany, testing);
	show(beany.str,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	return 0;
}

void set(stringy& tar, const char* ch) {
	int len = strlen(ch);
	char* str = new char[len + 1];
	strcpy(str, ch);
	tar.str = str;
	tar.ct = len;
}

void show(string tar, int n) {
	for (int i = 0; i < n; i++) {
		cout << tar << endl;
	}
}