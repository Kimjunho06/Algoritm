#include <iostream>

using namespace std;

int F(long long f, long long r, long long* arr) {
	int floor = f - 1 < 0 ? 0 : f - 1;

	if (arr[14 * f + r] != 0) {
		return arr[14 * f + r];
	}
	else {
		for (int i = 1; i <= r; i++) {
			if (arr[14 * floor + i] == 0) {
				F(floor, i, arr);
			}
			arr[14 * f + r] += arr[14 * floor + i];
		}
		return arr[14 * f + r];
	}
}

int main() {
	long long T, floor = 0, room = 0;
	long long arr[500] = {};
	cin >> T;

	for (int i = 1; i <= 14; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < T; i++) 
	{
		cin >> floor >> room;
		cout << F(floor, room, arr) << endl;
	}
}
