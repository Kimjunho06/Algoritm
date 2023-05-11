#include <iostream>
#include <stack>

using namespace std;

int main()
{
	string str;
	string answer;
	
	stack<char> s;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			answer += str[i];
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			if (str[i] == '+' || str[i] == '-') {
				if (!s.empty() && (s.top() == '*' || s.top() == '/')) {
					while (!s.empty())
					{
						answer += s.top();
						s.pop();
					}
					s.push(str[i]);
				}
				else {
					s.push(str[i]);	
				}
			}
			else {
				s.push(str[i]);	
			}
		}
	
		if (str[i] == '(') {
			s.push(str[i]);
		}
		if (str[i] == ')') {
			int size = s.size();
			for (int j = 0; j < size; j++) {
				if (s.top() != '(') {
					answer += s.top();
				}
				if (s.top() == '(') {
					s.pop();
					break;
				}
				s.pop();
			}
		}
	}

	while (!s.empty())
	{
		answer += s.top();
		s.pop();
	}

	cout << answer;
}



//int priority(char op) {
//    switch (op) {
//    case'(': case')': return 0;
//    case '+': case'-': return 1;
//    case '*':case'/': return 2;
//    }
//    return -1;
//}
//
//string infixToPostfix(string a) {
//    stack<char>s;
//    string postfix = "";
//    char ch, top_op;
//    for (int i = 0; i < a.size(); i++) {
//        ch = a[i];
//        switch (ch) {
//        case '+': case '-': case '*': case '/':
//            while (// 채워넣으세요) {
//                postfix += s.top();
//                s.pop();
//            }
//            s.push(ch);
//            break;
//        case '(':
//            s.push(ch);
//            break;
//        case ')':
//            top_op = s.top();
//            while (top_op != '(') { //왼쪽 괄호를 만날때까지 출력
			   // 채워넣으세요
//            }
//            s.pop();
//            break;
//        default: //피연산자
//            postfix += ch;
//            break;
//
//        }
//    }
//    while (!s.empty()) {
//        postfix += s.top();
//        s.pop();
//    }
//    return postfix;
//}