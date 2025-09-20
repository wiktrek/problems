#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, unordered_map<string,int>> groups;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        string sorted_word = word;
        sort(sorted_word.begin(), sorted_word.end());

        groups[sorted_word][word] = 1;
    }

    vector<vector<string>> result(groups.size());
    int i = 0;
    for (auto &entry : groups) {
        for (auto &entry2 : entry.second) {
            result[i].push_back(entry2.first);
        }
        i++;
    }
    for (int i = 0;i<result.size();i++) {
        sort(result[i].begin(), result[i].end());
    }
    sort(result.begin(), result.end());
    for (auto &group : result) {
        for (auto &word : group) {
            cout << word << " ";
        }
        cout << "\n";
    }

    return 0;
}