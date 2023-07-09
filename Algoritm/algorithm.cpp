#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        arr[i] = m;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }
}