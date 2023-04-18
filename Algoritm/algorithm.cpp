#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v;
queue<int> q;
int n, w, L, itime, totalW;
int vn;


int main() {	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> w >> L;

	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
	}
	for (int i = 0; i < n; i++) {
		
		while (true)
		{
			if (q.size() == w) {
				totalW -= q.front();
				q.pop();
			}
			if (totalW + v[i] <= L) {
				break;
			}
			q.push(0);
			itime++;
		}
		q.push(v[i]);
		totalW += v[i];
		itime++;
	}

	cout << itime + w;
}
