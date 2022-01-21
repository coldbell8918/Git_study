#include<iostream>

using namespace std;

void Three();

void See();

int main() {

	
	Three();
	Three();
	See();
	See();

	return 0;
}

void Three() {
	cout << " Three blind mice" << endl;
}

void See() {
	cout << " See how they run" << endl;
}