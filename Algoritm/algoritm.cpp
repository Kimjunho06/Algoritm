#include <iostream>

using namespace std;

int main() {
	/*int a, b, max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		if (a * b > max)
			max = a * b;
	}

	cout << max;*/

	/*int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		if (n % i == 0) cnt++;
	}

	cout << cnt;*/

	int hou = 0, min = 0, sec = 0, N;
	cin >> N;

	while (N >= 60) {
		N -= 60;
		min++;
		if (min >= 60) {
			min -= 60;
			hou++;
		}
	}

	sec = N;

	cout << hou << " " << min << " " << sec;
}