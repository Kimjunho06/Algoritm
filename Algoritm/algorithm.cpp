#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n * 2; i++) {
		if (i < n) {
			for (int j = n - (i + 1); j > 0; j--) {
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < (i * 2); j++) {
				cout << " ";
			}
			cout << "*";
		}
		else {
			for (int j = 0; j < i - n; j++) {
				cout << " ";
			}
			cout << "*";
			for (int j = (n * 2) - ((i - (n - 1)) * 2); j > 0; j--) {
				cout << " ";
			}
			cout << "*";
		}
		cout << endl;
	}
}	