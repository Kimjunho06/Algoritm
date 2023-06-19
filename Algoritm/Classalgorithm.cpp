#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
	/*map<string, int> map;
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		map.insert({ str, i + 1 });
	}

	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;

		if (str[i] >= '0' && str[i] <= '9') {
			int istr = stoi(str);

			cout << map.begin() + istr;
		}
		else {
			cout << map.find(str)->second << endl;
		}
	}*/
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	set<int> set;
	int n, m;
	int data;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> data;
		set.insert(data);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> data;
		if (set.find(data) != set.end()) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
}
