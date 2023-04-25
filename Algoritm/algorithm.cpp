//#include <iostream>
//#include <queue>
//#include <functional>
//
//using namespace std;
//
//long long dq[5000001];
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//
//	int N, L;
//	queue<long long> s;
//	priority_queue<long long, vector<long long>, greater<>> pq;
//	cin >> N >> L;
//	
//	for (int i = 0; i < N; i++) { // 최대 500만번
//		long long data;
//		cin >> data;
//		
//		dq[i] = data;
//
//		if (i < L) {
//			pq.pop();
//			pq.emplace(dq, dq + i + 1);
//			s.push(pq.top()); // 21~22
//		}
//		else {
//			priority_queue<long long, vector<long long> , greater<>> pq(dq + i - L + 1, dq + i+1);
//			s.push(pq.top());
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		cout << s.front() << " ";
//		s.pop();
//	}
//}
#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m, sum = 0;
	map <string, int> mp;
	cin >> n >> m;

	string a;
	for (int i = 0; i < n; i++) {
		cin >> a;

		mp.insert({ a, 0 });
	}

	for (int j = 0; j < m; j++) {
		cin >> a;
		if (mp.find(a) != mp.end()) {
			auto iter = mp.find(a);
			iter->second++;
		}
	}

	for (auto iter : mp) {
		sum += iter.second;
	}

	cout << sum;
}