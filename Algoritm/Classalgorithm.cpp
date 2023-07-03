#include <iostream>

using namespace std;

int main() {
	int A, B, V;
	int f, b;
	cin >> A >> B >> V;

	f = A - B;
	b = V - B;

	if (b % f == 0) {
		cout << b / f;
	}
	else {
		cout << b / f + 1;
	}
}
