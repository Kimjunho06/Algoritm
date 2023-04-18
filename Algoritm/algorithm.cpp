#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int main() {
	deque<int> q;
	stack<int> s;
	int N, save = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int skill;
		cin >> skill;

		s.push(skill);
	}

	for (int i = 1; i <= N; i++) {
		switch (s.top())
		{
			case 1:
				q.push_front(i);
				break;
			case 2:
				save = q.front();
				q.pop_front();
				q.push_front(i);
				q.push_front(save);
				break;
			case 3:
				q.push_back(i);
				break;
		}
		s.pop();
	}

	for (auto a : q) {
		cout << a << " ";
	}
}
