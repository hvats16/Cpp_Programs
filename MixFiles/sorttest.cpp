#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> p{6,3,7,1,8,3,2,8};\
    sort(p.begin(),p.end(),greater<int>());
    for(auto it:p){
        cout<<it<<" ";
    }
    return 0;
}