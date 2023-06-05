#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	bool v[22];
	string str;
	int n, data;

	cin >> n;

	for (int i = 1; i <= 20; i++) {
		v[i] = false;
	}

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str == "add") {
			cin >> data;
			v[data] = true;
		}
		else if (str == "remove") {
			cin >> data;
			v[data] = false;
		}
		else if (str == "check") {
			cin >> data;
			cout << v[data] << "\n";
		}
		else if (str == "toggle") {
			cin >> data;
			v[data] = !v[data];
		}
		else if (str == "all") {
			for (int j = 1; j <= 20; j++) {
				v[j] = true;
			}
		}
		else if (str == "empty") {
			for (int j = 1; j <= 20; j++) {
				v[j] = false;
			}
		}
	}
}