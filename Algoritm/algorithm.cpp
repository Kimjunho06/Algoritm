#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, data, cnt = 0;
	vector<int> v;
	
	cin >> n;
	v.push_back(-1);
	for (int i = 0; i < n; i++) {
		cin >> data;

		if (v.back() < data) {
			v.push_back(data);
			cnt++;
		}
		else {
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), data);
			*iter = data;
		}
	}

	cout << cnt;
}

// 10 20 10 30 20 50 70 40 50 30 70 10 90
// 4 5 6 7 1 2 3
// 1 3 1 2 3 4