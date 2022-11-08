#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//array4
	/*const int n = 10;
	int mass[n];
	int a, d;
	cin >> a >> d;
	int k = 1;
	for (int i = 1; i < n + 1; i++) {
		mass[i] = a * k;
		k = k * d;
		cout << mass[i] << ' ';
	}*/

	//array 5
	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	mas[1] = 1;
	cout << mas[0] << ' ' << mas[1] << ' ';
	for (int i = 2; i < n; i++) {
		mas[i] = mas[i - 2] + mas[i - 1];
		cout << mas[i] << ' ';
	}*/
	

	//array 7
	/*const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand();
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i  > -1; i--) {
		cout << mas[i] << ' ';
	}*/

	//array 8
	/*const int n = 10;
	int mas[n];
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = 0; i < n; i++) {
		if ((mas[i]%2) == 0) {
			cout << mas[i] << ' ';
			k++;
		}
	}*/

	//array16
	/*const int n = 10;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		int s = 0;
		cout << a[i] << ' ';
		cout << a[(n-1) - i] << ' ';
		s++;
	}*/

	//array17
	/*const int n = 10;
	int a[n];
	int k = 1;
	for (int i = 0; i < n; i++) {
		a[i] = k;
		k++;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 5; i+=2) {
		int s = 0;
		cout << a[i] << ' ' << a[i+1] << ' ';
		cout << a[(n - 1) - i] << ' ' << ((n - 2) - (i-1)) << ' ';
		s++;
	}*/




}