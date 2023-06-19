#include <iostream>

#include <map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	map<int, string> mpint;
	map<string, int> mpstr;
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		mpint.insert({ i + 1, str });
		mpstr.insert({ str, i + 1 });
	}
	
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;

		if (str[0] >= '0' && str[0] <= '9') {
			int istr = stoi(str);
			cout << mpint.find(istr)->second << "\n";
		}
		else {
			cout << mpstr.find(str)->second << "\n";
		}
	}
}
