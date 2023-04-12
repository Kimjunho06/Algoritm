#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;
// STL (Standard Template, Library)
// 벡터, 스택, 페어
string str1, str2;
// 결과
stack<int> ans;
// 연산
stack<char> s1, s2;

int main() {
	cin >> str1 >> str2;

	for (int i = 0; i < str1.size(); i++) 
		s1.push(str1[i]);
	for (int i = 0; i < str2.size(); i++)
		s2.push(str2[i]);

	if (s1.size() < s2.size()) {
		swap(s1, s2);
	}

	int extra = 0; // 올림수
	while (!s1.empty() && !s2.empty())
	{
		int x = s1.top() - '0';
		int y = s2.top() - '0';
		ans.push((x + y + extra) % 10);
		extra = ((x + y + extra) / 10);
		s1.pop();
		s2.pop();
	}

	if (extra != 0) {
		if (s1.empty()) {
			ans.push(extra);
			extra = 0;
		}
		else {
			while (!s1.empty()) {
				int x = s1.top() - '0';
				ans.push((x + extra) % 10);
				extra = ((x + extra) / 10);
				s1.pop();
			}
		}
	}
	else {
		while (!s1.empty()) {
			int x = s1.top() - '0';
			ans.push((x + extra) % 10);
			extra = ((x + extra) / 10);
			s1.pop();
		}
	}

	if (extra != 0) {
		ans.push(extra);
	}

	while (!ans.empty())
	{
		cout << ans.top();
		ans.pop();
	}
}