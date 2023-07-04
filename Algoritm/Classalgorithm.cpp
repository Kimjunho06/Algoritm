#include <iostream>

using namespace std;

int main() {
	int n, idx1, idx2;
	int tmp, answer = 1;
	int arr[3] = {};
	cin >> n;

	arr[0] = 1;
	for (int i = 0; i < n; i++) {
		cin >> idx1 >> idx2;

		tmp = arr[idx1-1];
		arr[idx1-1] = arr[idx2-1];
		arr[idx2-1] = tmp;
	}

	for (auto a : arr) {
		if (a == 1) {
			cout << answer;
			return 0;
		}
		answer++;
	}
}