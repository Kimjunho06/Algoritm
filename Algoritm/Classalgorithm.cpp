#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int arr[10002] = {};
	int n, input;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr[input]++;
	}

	for (int i = 0; i <= 10001; i++) {
		while (arr[i]--)
		{
			cout << i << "\n";
		}
	}
}
