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

	cout << "����Ŀ �̸��� �Է��ϼ���: ";
	cin >> prize1.maker;
	cout << "���̸� �Է��ϼ���: ";
	cin >> prize1.height;
	cout << "���� �Է��ϼ���: ";
	cin >> prize1.width;
	cout << "���̸� �Է��ϼ���: ";
	cin >> prize1.length;

	volume(&prize1);
	show(prize1);

	return 0;
}

void show(box p1) {
	
	cout << "����Ŀ �̸�: " << p1.maker << endl;
	cout << "����:" << p1.height << endl;
	cout << "��: " << p1.width << endl;
	cout << "����: " << p1.length << endl;
	cout << "����: " << p1.volume << endl;
	
}

void volume(box * p1) {
	p1->volume=p1->height * p1->width * p1->length;
}