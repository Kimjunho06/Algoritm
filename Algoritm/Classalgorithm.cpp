#include <iostream>

using namespace std;

int main() {
	int n, m, cnt = 0, min = 2500;
	char answer[2][9][9] = {
						{"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB"},

						{"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW",
						"WBWBWBWB",
						"BWBWBWBW"}
	};

	cin >> n >> m;
	
	char** board = new char* [n];
	for (int i = 0; i < n; i++) {
		board[i] = new char[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			for (int k = 0; k < 2; k++) {
				cnt = 0;
				for (int s = 0; s < 8; s++) {
					for (int q = 0; q < 8; q++) {
						if (board[s+i][q+j] != answer[k][s][q]) {
							cnt++;
						}
					}
				}
				if (cnt < min) {
					min = cnt;
				}
			}
		}
	}

	cout << min;
}
