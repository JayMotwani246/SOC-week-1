#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i].first;
        numbers[i].second = i + 1;
    }
    sort(numbers.begin(), numbers.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = numbers[left].first + numbers[right].first;
        if (sum == x) {
            cout << numbers[left].second << " " << numbers[right].second << endl;
            return 0;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}