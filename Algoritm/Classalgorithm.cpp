#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str1, str2;
    int arr[100002];
    int f, s, input = 0, front = 0;

    cin >> str1 >> str2;

    if (str1.size() < str2.size()) {
        string tmp = str1;
        str1 = str2;
        str2 = tmp;
    }

    for (int i = 1; i <= str1.size()+1; i++) {
        f = str1[i] - '0';
        s = str1[i] = '0';

        input = f + s;
        if (input > 10) {

        }
        arr[i] = input % 10;
    }
}