#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}

		for (int j = i * 2 - 1; j > 0; j--) {
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

