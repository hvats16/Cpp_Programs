#include <bits/stdc++.h>
using namespace std;

vector<int> incrementNumber(int n, vector<int > A){
    A[n-1]++;
    int carry = A[n-1]/10;
    A[n-1] = A[n-1]%10;
    for(int i=n-2;i>=0;i++){
        if(carry == 1){
            carry = A[i]/10;
            A[i] = A[i]%10;
        }
    }
    if(carry == 1){
        A.insert(A.begin(),1);
    }
    return A;
}

void hello(vector<int> arr) {
    for (auto it : arr) {
        it = it + 1;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
    {
        cin >> i;
    }
    vector<int> result = incrementNumber(n, A);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}