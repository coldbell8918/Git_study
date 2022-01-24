#include<iostream>

using namespace std;

template<typename T>
T max5(T a[]);

int main() {

	int arr1[5] = { 3,7,6,5,4 };
	double arr2[5] = { 3.5 , 4.2, 1.5, 2.7, 3.8 };

	cout << max5(arr1) << endl;
	cout << max5(arr2) << endl;

	return 0;
}

template<typename T>
T max5(T a[]) {
	T temp;
	for (int i = 0; i < 4; i++) {
		if (a[i] > a[i + 1]) {
			temp=a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	return a[4];
}