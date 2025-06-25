#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;
        int target_sum = x - arr[i].first;
        while (left < right) {
            int current_sum = arr[left].first + arr[right].first;
            if (current_sum == target_sum) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << endl;
                return 0;
            } else if (current_sum < target_sum) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}