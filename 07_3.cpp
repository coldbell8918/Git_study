#include<iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box p1);
void volume(box* p1);

int main() {

	box prize1;

	cout << "메이커 이름을 입력하세요: ";
	cin >> prize1.maker;
	cout << "높이를 입력하세요: ";
	cin >> prize1.height;
	cout << "폭을 입력하세요: ";
	cin >> prize1.width;
	cout << "길이를 입력하세요: ";
	cin >> prize1.length;

	volume(&prize1);
	show(prize1);

	return 0;
}

void show(box p1) {
	
	cout << "메이커 이름: " << p1.maker << endl;
	cout << "높이:" << p1.height << endl;
	cout << "폭: " << p1.width << endl;
	cout << "길이: " << p1.length << endl;
	cout << "부피: " << p1.volume << endl;
	
}

void volume(box * p1) {
	p1->volume=p1->height * p1->width * p1->length;
}