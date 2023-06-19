#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	unordered_map<char, int> unmp;
	string str;
	bool check;
	int n, cnt = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		check = true;
		unmp.clear();

		for (int j = 0; j < str.size(); j++) {
			if (unmp.find(str[j]) == unmp.end()) {
				unmp.insert({ str[j], 0 });
				while (str[j] == str[j+1])
				{
					j++;
				}
			}
			else {
				check = false;
				break;
			}
		}

		if (check) cnt++;
	}

	cout << cnt;
}
