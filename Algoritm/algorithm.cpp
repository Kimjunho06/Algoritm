#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, k, cnt = 0, result = 0;
	cin >> N >> k;

	int low, mid, high;

	low = 1; // first index + 1
	high = k; // last index + 1

	while (low <= high) {
		mid = (low + high) / 2;
		cnt = 0;

		for (int i = 1; i <= N; i++) {
			cnt += min(mid / i, N);
		}

		if (cnt < k) {
			low = mid + 1;
		}
		else {
			result = mid;
			high = mid - 1;
		}
	}

	cout << result;
}

// k는 작고 큰지만 판별하는 것