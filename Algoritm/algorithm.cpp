#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        v.push_back(data);
    }

    sort(v.begin(), v.end());

    for (auto a : v) {
        cout << a << endl;
    }
}