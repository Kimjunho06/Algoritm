#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int k, n; // k : 나무 수, n = 가져갈 나무 m
int vn;
long long low, mid, high;
long long cnt;
long long iMax, result;
int main()
{
	ios_base::sync_with_stdio(false);
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> vn;
		v.push_back(vn);
		if (iMax < vn) iMax = vn;
	}

	low = 1;
	high = iMax;

	while (low <= high) {
		mid = (low + high) / 2;
		
		cnt = 0; // 가져간 미터
		for (int i = 0; i < k; i++) {
			if (v[i] > mid) {
				cnt += v[i] - mid;
			}
		}

		if (cnt >= n) { // 가진 미터 이상
			low = mid + 1;
			if (result < mid) {
				result = mid;
			}
		}
		else {
			high = mid - 1;
		}
	}

	cout << result; // 최대로 가져간 머리

	/*
		1. 0~최대값 중앙을 본다
		2. 나누어가며 카운트를 센다
		3. 적으면 high를 줄인다.
		4. 같다면 그 mid값
	*/
	//int n, m;
	//int high = 0, low = 0, mid = 0;
	//int cnt = 0;
	//cin >> n >> m;

	//low = 0;
	//for (int i = 0; i < n; i++) {
	//	cin >> arr[i];
	//	if (high < arr[i]) high = arr[i];
	//}

	//while (low <= high)
	//{
	//	cnt = 0;
	//	mid = (low + high) / 2;
	//	for (int i = 0; i < n; i++) {
	//		cnt += arr[i] / mid;
	//	}
	//	if (cnt == m) {
	//		cout << mid;
	//		break;
	//	}
	//	
	//}

	//cout << low << endl << high << endl << mid;
}

