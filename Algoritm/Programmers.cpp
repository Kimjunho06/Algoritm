#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;

        if (m > data) cout << data << " ";
    }

}