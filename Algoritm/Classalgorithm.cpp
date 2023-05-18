#include <iostream>

using namespace std;

int main() {
	string a, b;
	int cnt = 0, max = 0;

	cin >> a >> b;

	for (int i = 0; i <= b.size() - a.size(); i++) {
		cnt = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == b[j+ i]) {
				cnt++;
			}
		}

		if (cnt > max) max = cnt;
	}

	cout << a.size() - max;
}