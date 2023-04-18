#include <iostream>
#include <deque>

using namespace std;

deque<int> Adq;
deque<int> Bdq;
int result;
string str;
int main() {	
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A') 
			Adq.push_back(i);
		if (str[i] == 'B') 
			Bdq.push_back(i);
		if (str[i] == 'C') {
			if (!Bdq.empty() && Bdq.front() < i) {
				Bdq.pop_front();
				result++;
			}
		}

	}
	while (!Adq.empty() && !Bdq.empty())
	{
		if (Adq.front() < Bdq.front()) {
			result++;
			Adq.pop_front();
			Bdq.pop_front();
		}
		else {
			Bdq.pop_front();
		}
	}

	cout << result;
}
