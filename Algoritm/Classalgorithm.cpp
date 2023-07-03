#include <iostream>

using namespace std;

int f(int num) {
	if (num == 0) return 1;

	return num * f(num - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	cout << f(n) / f(k) / f(n - k);
	return 0;
}