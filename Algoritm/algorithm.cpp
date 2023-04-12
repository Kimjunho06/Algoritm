#include <iostream>
#include <vector>

using namespace std;

int main() {
	double N, sum = 0, avg = 0, cnt = 0;
	double percent = 0;
	int* save;
	cin >> N;

	for (int i = 0; i < N; i++) {
		sum = 0;
		avg = 0;
		cnt = 0;

		int count;
		cin >> count;
		save = new int[count];

		for (int j = 0; j < count; j++) {
			int data;
			cin >> data;

			save[j] = data;
			sum += data;
		}
		avg = sum / count;

		for (int j = 0; j < count; j++) {
			if (avg < save[j]) {
				cnt++;
			}
		}
		
		percent = cnt / count * 100;

		cout << fixed;
		cout.precision(3);
		cout << percent << "%" << endl;


		
		delete[] save;
	}

}
