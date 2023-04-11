#include <iostream>
#include <string>
#include <stack>

using namespace std;
// STL (Standard Template, Library)
// 벡터, 스택, 페어
int main() {
	string a;
	int fir = 0, sec = 0;
	int ipData = 0, mul = 10;
	getline(cin, a);
	stack<int> s;
	
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			ipData = (ipData * mul) + (a[i] - 48);
		}
		if (a[i] == ' ' && ipData != 0) {
			s.push(ipData);
			ipData = 0;
		}

		switch (a[i])
		{
		case '+':
			fir = s.top();
			s.pop();
			sec = s.top();
			s.pop();
			s.push(sec + fir);
			break;
		case '-':
			fir = s.top();
			s.pop();
			sec = s.top();
			s.pop();
			s.push(sec - fir);
			break;
		case '*':
			fir = s.top();
			s.pop();
			sec = s.top();
			s.pop();
			s.push(sec * fir);
			break;
		case '/':
			fir = s.top();
			s.pop();
			sec = s.top();
			s.pop();
			s.push(sec / fir);
			break;
		}
	}

	cout << s.top();
}