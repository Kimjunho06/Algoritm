#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}




































 ///////////////////////////////
/*stack<char> s;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			cout << str[i];
		}

		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			s.push(str[i]);
		}


	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}*/
// G*(A-B*(C/D+E)/F)
// GABCD/E+*F/-*

