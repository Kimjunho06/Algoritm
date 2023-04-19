#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	int sum = 0, result = 0;
	vector<int> v;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int data;
		cin >> data;

		v.push_back(data);
	}

	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				sum = v[i] + v[j] + v[k];
				if (sum > result && sum <= M) {
					result = sum;
				}
			}
		}
	}

	cout << result;
}
