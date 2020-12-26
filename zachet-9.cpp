#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int a[n];
	int N = n;
	cout << "Enter array" << endl;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	int current = a[0];
	for (int i = 0; i < N; i++) {
		if (current == a[i + 1]) {
			for (int j = i; j < N - 1; j++) {
				a[j] = a[j + 1];
			}
			--N;
		}
		current = a[i + 1];
		for (int k = 0; k < N; k++) {
			cout << a[k] << " ";
		}
		cout << " " << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}