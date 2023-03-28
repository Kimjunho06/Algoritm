#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int k, n;
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
		
		cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += v[i] / mid;
		}

		if (cnt >= n) { // ���� �߶���
			low = mid + 1;
			if (result < mid) {
				result = mid;
			}
		}
		else {
			high = mid - 1;
		}
	}

	cout << result;

	/*
		1. 0~�ִ밪 �߾��� ����
		2. ������� ī��Ʈ�� ����
		3. ������ high�� ���δ�.
		4. ���ٸ� �� mid��
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

