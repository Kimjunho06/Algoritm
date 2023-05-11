#include <iostream>
#include <queue>

using namespace std;

//class Queue {
//	int* buf;
//	int qsize;
//	int front;
//	int rear;
//
//public:
//	void InitQueue(int qsize) {
//		this->qsize = qsize;
//		buf = new int(qsize);
//		front = -1;
//		rear = -1;
//	}
//	void Enqueue(int data) {
//		if (IsFull()) {
//			cout << "꽉참" << endl;
//		}
//		else {
//			++rear;
//			buf[rear] = data;
//		}
//	}
//	int Dequeue() {
//		if (IsEmpty()) return -1;
//		else {
//			++front;
//			return buf[front];
//		}
//	}
//	int IsFull() {
//		if (qsize - 1 == rear) {
//			return 1;
//		}
//		return 0;
//	}
//	int IsEmpty() {
//		if (rear == front) {
//			return 1;
//		}
//		return 0;
//	}
//};
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//
//	int i;
//	Queue q1;
//	q1.InitQueue(10);
//
//	for (int i = 1; i <= 11; i++) {
//		cout << i << "입력" << endl;
//		q1.Enqueue(i);
//	}
//	cout << endl;
//	while (!q1.IsEmpty())
//	{
//		cout << q1.Dequeue() << "출력" << endl;
//	}
//	cout << endl;
//	return 0;
//}

// vector 방식
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	vector<int> v;
	string s;
	int n, data;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s == "push") {
			cin >> data;
			v.push_back(data);
			continue;
		}
		else if (s == "size") {
			cout << v.size() << "\n";
			continue;
		}
		else if (s == "empty") {
			cout << v.empty() << "\n";
			continue;
		}

		if (!v.empty()) {
			if (s == "pop") {
				cout << v.front() << "\n";
				v.erase(v.begin() + 0);
			}
			else if (s == "front") {
				cout << v.front() << "\n";
			}
			else if (s == "back") {
				cout << v.back() << "\n";
			}
		}
		else {
			cout << -1 << "\n";
		}
	}
}
*/
// queue 방식
/* queue 방식
#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	queue<int> q;
	string a;
	int N, data;
	cin >> N;

	while (N--)
	{
		cin >> a;
		if (a == "push") {
			cin >> data;
			q.push(data);
			continue;
		}
		else if (a == "size") {
			cout << q.size() << "\n";
			continue;
		}
		else if (a == "empty") {
			cout << q.empty() << "\n";
			continue;
		}

		if (q.empty()) {
			cout << -1 << "\n";
		}
		else {
			if (a == "pop") {
				cout << q.front() << "\n";
				q.pop();
			}
			else if (a == "front") {
				cout << q.front() << "\n";
			}
			else if (a == "back") {
				cout << q.back() << "\n";
			}
		}
	}
}
*/
