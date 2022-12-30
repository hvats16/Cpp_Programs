#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingRepeating(vector<int> nums, int size) {
    vector<int> freq(size+1,0);
    pair<int, int> ans;
    
    for (int i = 0; i < size; i++) {
        freq[nums[i]]++;
    }
    // for (int i = 0; i < size+1; i++) {
    //     cout<<freq[i]<<" ";
    // }
    
    for (int i = 1; i < size+1; i++) {
        if (freq[i] == 0) {
            ans.first = i;
        }
        if (freq[i] == 2) {
            ans.second = i;
        }
    }
    return ans;
}

int main() {
    vector<int> v{4,3,6,2,1,1};
    pair<int, int> p;
    p = missingRepeating(v, v.size());
    cout << "Missing no: " << p.first << " "
         << "Repeating No: " << p.second;
}