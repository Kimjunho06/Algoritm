#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[100001];
int b[100001];

//int n, vn;
//int m, vm;
//vector<int> v;

//int bisearch(int x) {
//	int low = 0;
//	int high = n - 1;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (v[mid] == x) return 1;
//		else if (v[mid] > x) high = mid - 1;
//		else if (v[mid] < x) low = mid + 1;
//	}
//
//	return 0;
//}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	/*cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> vn;
		v.push_back(vn);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> vm;
		cout << bisearch(vm) << "\n";
	}*/
	int n, m;
	int here, low, high, mid;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		here = b[i];
		low = 0;
		high = n - 1;
		cnt = 0;
		while (low <= high)
		{
			mid = (low + high) / 2;

			if (here == a[mid]) {
				cnt++;
				break;
			}
			else if (here < a[mid]) {
				high = mid - 1;
			}
			else if (here > a[mid]) {
				low = mid + 1;
			}
		}
		cout << cnt << endl;
	}
}

	//int x, low, high, mid;
	//cin >> x;

	//low = 0;
	//high = 9;

	//while (low < high)
	//{
	//	mid = (low + high) / 2;
	//	if (x == arr[mid]) {
	//		cout << x << "�� " << mid << "�� index�� �ֽ��ϴ�." << endl;
	//		break;
	//	}
	//	else if (x < arr[mid]) //���ʿ� �ִ� ��Ȳ
	//	{
	//		high = mid - 1;
	//	}
	//	else if (x > arr[mid]) //�����ʿ� �ִ� ��Ȳ
	//	{
	//		low = mid + 1;
	//	}
	//}


/*
	1. endl vs "\n|
	2. ios_base::sync_with_stdio(false);
	3. cin.tie(nullptr), cout.tie(nullptr);

	��� ǥ�� - �־��� ����ð� ǥ��
	���ް� ǥ�� - �ֻ��� ����ð� ǥ��
	��Ÿ ǥ�� - ��� ����ð� ǥ��

	���� ������ ��ġ�� ���� ��ȣ �ȿ� ��
	O(1), O(n), O(log2n), O(Nlog2N), O(N^2), O(N^3),O(2^n)
*/



/*int sum(int x) {
	int sum = 0;
	for (int i = 1; i <= x; i++) {
		sum += i;
	}
	return sum;
	//return (n * (n+1) /2)
}*/
#pragma region ���

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
////ã�ư� ��ġ, ���� �����ִ� �� ĳ���, ī����(���ѻ���)
//void f(int openCbn1, int openCbn2, int dis, int cnt) {
//
//	if (m == cnt) {
//		answer = min(answer, dis);
//		return;
//	}
//
//	// ã�ƾ� �ϴ� ��ġ�� ����� ���� ã�� �� ���̸�ŭ ī��Ʈ�� �����ָ� ��
//	// �ٲܶ����� �����ִ� ĳ����� �ٲ������
//
//	f(arr[cnt], openCbn2,dis + abs(arr[cnt] - openCbn1), cnt + 1);
//	f(openCbn1,arr[cnt], dis + abs(arr[cnt] - openCbn2), cnt + 1);
//}

#pragma endregion
#pragma region ����Լ� �� ����

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

	//�ܼ� ���, ���� ���, ���� 
#pragma region ���

//int f(int x) { // �Ǻ���ġ �ݺ� ���̱� (�޸������̼�)
//	if (x <= 2) return 1;
//
//	return save[x] = f(x - 1) + f(x - 2);
//}


/*
void f1(int x) { // ����� ��� - �ܼ� ���
	if (x > n)
		return;
	cout << x << endl;
	f1(x+1);
}

void f2(int x) { // ����� ��� - �ܼ� ���
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
