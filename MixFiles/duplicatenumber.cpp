#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int size = nums.size();
    int ans = 0;
    vector<int> duplicate(size);
    for (int i = 0; i < size; i++) {
        duplicate[nums[i]]++;
    }
    for (int i = 0; i < size; i++) {
        cout << duplicate[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if (duplicate[i] > 1) {
            ans = nums[i];
        }
    }
    return ans;
}

vector<string> returnHello() {
    vector<string> v;
    v.push_back("Hello");
    v.push_back("World");
    v.push_back("!");
    return v;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // vector<int> v {1, 3, 4, 2, 2};
    // int ans = findDuplicate(v);
    // cout << ans << endl;

    // vector<string> mainVector = returnHello();
    // for (auto it : mainVector) {
    //     cout << it << " ";
    // }
    int num;
    cin >> num;
    cout << num;
}