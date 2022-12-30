#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &nums) {
    // int zeros = 0, ones = 0, two = 0;
    // for (int i = 0; i < nums.size(); i++) {
    //     if (nums[i] == 0) zeros++;
    //     if (nums[i] == 1) ones++;
    //     if (nums[i] == 2) two++;
    // }
    // cout << zeros << " " << ones << " " << two << endl;
    // int i = 0;
    // while(zeros>0){
    //     nums[i++] = 0;
    //     zeros--;
    // }
    // while(ones>0){
    //     nums[i++] = 1;
    //     ones--;
    // }
    // while(two>0){
    //     nums[i++] = 2;
    //     two--;
    // }

    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low++], nums[mid++]);
        }
        else if(nums[mid]==1){
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid], nums[high--]);
        }
    }
}

int main() {
    vector<int> v{2, 0, 2, 1, 1, 0};
    countSort(v);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}


