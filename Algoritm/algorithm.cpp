#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[10];
	int x, y;
	cin >> x >> y;

	// x 이상 y 이하의 값 찾기
	upper_bound(arr, arr + 10, y) - lower_bound(arr, arr + 10, x);
	// x의 개수
	upper_bound(arr, arr + 10, y) - lower_bound(arr, arr + 10, y);
}

// k는 작고 큰지만 판별하는 것