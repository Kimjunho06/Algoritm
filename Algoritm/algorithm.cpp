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
#include <string>

using namespace std;

int main() {
	map<string, float> mp;
	int cnt = 0;
	string a;

	while (getline(cin, a))
	{
		// getline(cin, a);
		cnt++;
		if (mp.find(a) != mp.end()) { // 찾아지면
			auto iter = mp.find(a);
			iter->second++;
			continue;
		}
		mp.insert({ a, 1 });
		// if (a == "Willow") break;
	}

	cout << fixed;
	cout.precision(4);

	for (auto iter : mp) {
		cout << iter.first << " " << (iter.second/cnt) * 100 << "\n";
	}
}