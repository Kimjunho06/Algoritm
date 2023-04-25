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
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	set<int> s;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int data;
		cin >> data;

		if (s.find(data) != s.end()) {
			s.erase(s.find(data));
			continue;
		}
		s.insert(data);
				
	}

	cout << s.size();

}