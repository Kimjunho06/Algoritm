#include <iostream>

using namespace std;

int arr[46];

int F(int f, int arr[46]) {
	if (arr[f] != 0) return arr[f];

	int result = 0;

	if (f <= 2)
		result = 1;
	else {
		result = F(f - 2, arr) + F(f - 1, arr);
	}

	arr[f] = result;

	return result;
}

int main() {
	int n;
	cin >> n;

	cout << F(n, arr);
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

