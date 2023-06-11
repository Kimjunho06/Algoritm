#include <iostream>

using namespace std;

int main() {
	int n;
	int H, W, N;
	int h, w;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> H >> W >> N;
		h = 0; w = 1;
		while (N--)
		{
			++h;
			if (h > H) {
				h = 1;
				w++;
			}
		}
		cout << h * 100 + w << endl;
	}
}
