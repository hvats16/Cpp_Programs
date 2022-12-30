#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    int i = 0;
    int j = 0;
    int maxi = INT_MIN;
    vector<int> temp(k, 0);
    int size = nums.size();
    while (j < size) {
        temp.push_back(nums[j]);
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            maxi = INT_MIN;
            maxi = *max_element(temp.begin(), temp.end());
            ans.push_back(maxi);
            auto it = temp.begin();
            temp.erase(it);
            for(auto i:temp){
                cout << i << endl; 
            }
            // temp[i] = 0;
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
    vector<int> v{1, -1};
    vector<int> ans = maxSlidingWindow(v, 1);
    for (auto it : ans) {
        cout << it << " ";
    }
}