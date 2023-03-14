#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*int a, b, max = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		if (a * b > max)
			max = a * b;
	}

	cout << max;*/

	/*int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {   => n/2
		if (n % i == 0) cnt++;
	}

	cout << cnt;*/

	/*int hou = 0, min = 0, sec = 0;
	cin >> sec;

	while (sec >= 60) {
		sec -= 60;
		min++;
		if (min >= 60) {
			min -= 60;
			hou++;
		}
	}

	cout << hou << " " << min << " " << sec;
	
	cout << sec / 3600 << sec % 3600 / 60 << sec % 3600 % 60
	*/



	/*int hor, ver;
	cin >> hor >> ver;

	for (int i = 1; i <= ver; i++) {
		for (int j = 1; j <= hor; j++) {
			if (i == 1 || i == ver) {
				if (j == 1 || j == hor) {
					cout << "+";
				}
				else {
					cout << "-";
				}
			}
			else {
				if (j == 1 || j == hor) {
					cout << "|";
				}
				else {
					cout << " ";
				}
			}
		}

		cout << endl;
	}*/

	/*
	int n, a, b, c, cnt = 0;
	cin >> n;

	for (int a = 1; a <= n; a++) {
		for (int b = a; b <= n; b++) {
			c = n - (a + b);
			if (a + b > c && c >= b) {
				cnt++;
				cout << a << " " << b << " " << c << endl;
			}
		}
	}
	if (cnt == 0) cout << "-1";
	*/

	/*int N, data;
	cin >> N;

	vector<int> sel;
	vector<int> ans;

	for (int i = 0; i < N; i++) {
		cin >> data;
		sel.push_back(data);

		ans.push_back(N);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (sel[i] >= sel[j]) ans[i]--;

		}
	}

	for (int a : ans) {
		cout << a << endl;
	}*/

	/*int N[5][5];
	int sum = 0, max = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> N[i][j];
		}
	}
	for (int s = 0; s < 3; s++) {
		for (int k = 0; k < 3; k++) {
			for (int i = 0 + k; i < 3 + k; i++) {
				for (int j = 0 + s; j < 3 + s; j++) {
					sum += N[i][j];
				}
			}

			if (sum > max) max = sum;
			sum = 0;
		}
	}	

	cout << max;*/

	vector<int> N;

	for (int i = 0; i < 3; i++) {
		int data;
		cin >> data;

		N.push_back(data);
	}

	for (int i = N.size(); i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			if (N[j] > N[j + 1]) {
				int tmp = N[j];
				N[j] = N[j + 1];
				N[j + 1] = tmp;
			}
		}
	}

	for (int a : N) {
		cout << a << " ";
	}
}