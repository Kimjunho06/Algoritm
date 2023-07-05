#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str, boomstr;
    string answer, input;
    bool ck = true;

    cin >> str >> boomstr;

    for (int i = 0; i < str.size(); i++) {
        answer += str[i];
        if (answer.size() >= boomstr.size() && answer.back() == boomstr.back()) {
            ck = true;
            for (int i = 0; i < boomstr.size(); i++) {
                if (answer[answer.size() - boomstr.size() + i] != boomstr[i]) {
                    ck = false;
                    break;
                }
            }
            if (ck) {
                answer.resize(answer.size() - boomstr.size());
            }
        }
    }

    if (answer.empty()) {
        answer = "FRULA";
    }

    cout << answer;
}