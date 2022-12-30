#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(8);
    
    // cout << endl;
    // for (auto it = s.begin(); it != s.end();it++){
    //     cout << *it << endl;
    // }
    auto it = s.find(1);
    if(it!=s.end())
        s.erase(it);

    for(auto it:s){
        cout << it << endl;
    }
    s.clear();
    for(auto it:s){
        cout << it << endl;
    }
    cout << s.size() << endl;
}