#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    cout << n / 5 + n / 25 + n / 125;

}