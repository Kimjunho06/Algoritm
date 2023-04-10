#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool comp(string a, string b) {
    if (a.length() < b.length()) {
        return true;
    }
    else if (a.length() == b.length()) {
        if (a < b) {
            return true;
        }
    }
    return false;
}


vector<int> solution(vector<string> words, vector<string> queries) {
    vector<int> answer;
    
    vector<string> revwords = words;
    for (int i = 0; i < revwords.size(); i++) {
        reverse(revwords[i].begin(), revwords[i].end());
    }

    sort(words.begin(), words.end(), comp);
    sort(revwords.begin(), revwords.end(), comp);

    for (int i = 0; i < queries.size(); i++) {
        int low, high, idx;
        string strQuery = queries[i];

        if (strQuery[0] == '?') {
            reverse(strQuery.begin(), strQuery.end());
            idx = strQuery.find('?');
            for (int j = idx; j < strQuery.size(); j++) {
                strQuery[j] = 'a';
            }
            low = lower_bound(revwords.begin(), revwords.end(), strQuery, comp) - revwords.begin();
            
            for (int j = idx; j < strQuery.size(); j++) {
                strQuery[j] = 'z';
            }
            high = upper_bound(revwords.begin(), revwords.end(), strQuery, comp) - revwords.begin();

        }
        else {
            idx = strQuery.find('?');
            for (int j = idx; j < strQuery.size(); j++) {
                strQuery[j] = 'a';
            }
            low = lower_bound(words.begin(), words.end(), strQuery, comp) - words.begin();

            for (int j = idx; j < strQuery.size(); j++) {
                strQuery[j] = 'z';
            }
            high = upper_bound(words.begin(), words.end(), strQuery, comp) - words.begin();

        }
        answer.push_back(high - low);

    }
    return answer;
}

int main() {
    vector<string> words = { "frodo", "front", "frost", "frozen", "frame", "kakao" };
    vector<string> queries = { "fro??", "????o", "fr???", "fro???", "pro?" };
    //solution(words, queries);
}