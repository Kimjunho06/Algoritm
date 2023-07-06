#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    for (int i = 666;; i++) {
        int tmp = i;
        while (tmp >= 666) {
            if (tmp % 1000 == 666) {
                cnt++;
                break;
            }
            tmp /= 10;
        }
        if (n == cnt) {
            std::cout << i;
            break;
        }
    }
}