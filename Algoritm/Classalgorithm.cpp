#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    queue<int> q;

    for (int i = 0; i < arr.size(); i++) {

        if (q.empty()) {
            q.push(arr[i]);
        }
        else {
            if (q.front() != arr[i]) {
                answer.push_back(q.front());
                while (!q.empty()) {
                    q.pop();
                }
                q.push(arr[i]);
            }
            else {
                q.push(arr[i]);
            }
        }
    }
    answer.push_back(q.front());

    return answer;
}