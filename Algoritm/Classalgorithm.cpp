#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float arr[10][10];
	float avg = 0, min = 100;
	float result = 0;

	for (int i = 0; i < 9; i++) {
		avg = 0;
		min = 100;
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			avg += arr[i][j];
		}
		avg /= 9;
		avg = round(avg);

		for (int j = 0; j < 9; j++) {
			if (abs(avg - arr[i][j]) < min) {
				min = abs(avg - arr[i][j]);
				result = arr[i][j];
			}
		}
		cout << avg << " " << result << endl;
	}

	int N, sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		sum = i;
		for (int j = i + 1; j < N; j++) {
			sum += j;
			if (sum > N) break;
			if (sum == N) {
				while (i - 1 != j) {
					cout << j;
					j--;
					if (i - 1 == j) break;
					cout << " + ";
				}
				cout << " = " << N << endl;
			}
		}
	}
}