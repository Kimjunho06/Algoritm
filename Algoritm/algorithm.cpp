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
	int N, res = 0;
	map<string, int> m;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int rep;
		cin >> rep;

		m.clear();
		res = 1;

		for (int j = 0; j < rep; j++) {
			string clothes, type;
			cin >> clothes >> type;
		
			if (m.find(type) == m.end()) { // 중복이 없는 경우
				m.insert({type, 2});
				continue;
			}
			
			auto iter = m.find(type);
			iter->second++;
		}

		for (auto iter : m) {
			res *= iter.second;
		}

		cout << res - 1 << "\n";
	}
}