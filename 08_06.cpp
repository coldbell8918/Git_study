#include<iostream>

using namespace std;

template <typename T> T maxn(T a[], int n);
template<>const char* maxn(const char* a[], int n);

int main() {

	int arr1[6] = { 6,5,2,8,1,3 };
	double arr2[4] = { 7.1, 5.3, 2.2, 4.5 };
	const char* arr3[4] = { "spring", "summer", "fall","winter" };

	cout << maxn(arr1, 6) << endl;
	cout << maxn(arr2, 4) << endl;
	cout << maxn(arr3, 4) << endl;


	return 0;
}

template <typename T> T maxn(T a[], int n) {
	for (int i = 0; i < (n-1); i++) {
		if (a[i] > a[i + 1]) {
			T temp;
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	return a[n - 1];
}

template<>const char* maxn(const char* a[], int n) {
	const char* str = a[0];
	for (int i = 0; i < n; i++)
		if (strlen(str) < strlen(a[i])) {
			str = a[i];
		}
	return str;
}