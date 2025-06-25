#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; ++i) {
        cin >> songs[i];
    }

    int start = 0, end = 0, maxLength = 0;
    set<int> uniqueSongs;

    while (end < n) {
        if (uniqueSongs.find(songs[end]) == uniqueSongs.end()) {
            uniqueSongs.insert(songs[end]);
            maxLength = max(maxLength, (int)uniqueSongs.size());
            end++;
        } else {
            uniqueSongs.erase(songs[start]);
            start++;
        }
    }

    cout << maxLength << endl;
    return 0;
}