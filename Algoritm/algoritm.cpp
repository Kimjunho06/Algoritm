#include <iostream>

using namespace std;

int main()
{
	string a = "";
	char b = ' ';
	cin >> a;
	int max = 0, cur = 0;


	for (int i = 0; i < a.size(); i++) a[i] = toupper(a[i]);

	for (int i = 0; i < 26; i++)
	{
		cur = 0;
		for (int j = 0; j < a.size(); j++) {
			if ((int)a[j] - 65 == i) cur++;
		}

		if (max < cur)
		{
			max = cur;
			b = char(i + 65);
		}
		else if (max == cur) b = '?';
	}

	cout << b;
}





#pragma region 재귀

/*
int a, b;
void f1(int);
void f2(int);
void f3(int);
*/

//int f(int x);
//int N;
//int nums[200] = { 1, 2, };
//
//int save[201];

//int Cbn, odr1, odr2, m;
//int arr[21];
//int answer = 9999;
////찾아갈 위치, 현재 열려있는 두 캐비넷, 카운팅(제한사항)
//void f(int openCbn1, int openCbn2, int dis, int cnt) {
//
//	if (m == cnt) {
//		answer = min(answer, dis);
//		return;
//	}
//
//	// 찾아야 하는 위치랑 가까운 곳을 찾고 그 차이만큼 카운트를 더해주면 됨
//	// 바꿀때마다 열려있는 캐비넷을 바꿔줘야함
//
//	f(arr[cnt], openCbn2,dis + abs(arr[cnt] - openCbn1), cnt + 1);
//	f(openCbn1,arr[cnt], dis + abs(arr[cnt] - openCbn2), cnt + 1);
//}

#pragma endregion
#pragma region 재귀함수 전 코테

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
	}



	int f(int x){
		int rank = 0;

		for (int i = 0; i < n; i++){
			if (arr[x] < arr[i]){
				rank++;
			}
		}

		return rank;
	}
	*/

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

	/*vector<int> N;

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
	}*/

#pragma endregion

	//단순 재귀, 다중 재귀, 복합 
#pragma region 재귀

//int f(int x) { // 피보나치 반복 줄이기 (메모이제이션)
//	if (x <= 2) return 1;
//
//	return save[x] = f(x - 1) + f(x - 2);
//}


/*
void f1(int x) { // 상향식 재귀 - 단순 재귀
	if (x > n)
		return;
	cout << x << endl;
	f1(x+1);
}

void f2(int x) { // 하향식 재귀 - 단순 재귀
	if (x <= 0) return;
	cout << x;
	f2(x - 1);
}

void f3(int x) {
	if (x > b) return;
	if (x % 2 != 0) cout << x << " ";
	f3(x + 1);
}
*/
#pragma endregion
