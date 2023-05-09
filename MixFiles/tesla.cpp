#include <bits/stdc++.h>
using namespace std;

vector<int> tesla(vector<int> diffs, int n) {
    int maximumSpeed = INT_MIN;
    int minimumSpeed = INT_MAX;
    int speed = 1500;
    for (int i = 0; i < n; i++) {
        speed += diffs[i];
        maximumSpeed = max(maximumSpeed, speed);
        minimumSpeed = min(minimumSpeed, speed);
    }
    return {maximumSpeed, minimumSpeed};
}

int main() {
    int n;
    cin >> n;
    vector<int> diffs;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        diffs.push_back(x);
    }
    vector<int> ans = tesla(diffs, n);
    cout << ans[0] << " " << ans[1];
}