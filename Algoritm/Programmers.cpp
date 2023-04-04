#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> y >> x;
	int** arr = new int* [y];
	for (int i = 0; i < y; i++) {
		arr[i] = new int[x];
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			arr[i][j] = i;
		}
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			cout << arr[i][j] << endl;
		}
	}
}
