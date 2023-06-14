#include <iostream>

using namespace std;

int main() {
	int n, cnt, res = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int data;
		cin >> data;

		cnt = 0;
		for (int j = 1; j < data; j++) {
			if (cnt == 2) break;
			if (data % j == 0) {
				cnt++;
			}
		}
		if (cnt < 2 && data >= 2) {
			res++;
		}
	}

	cout << res;
}
