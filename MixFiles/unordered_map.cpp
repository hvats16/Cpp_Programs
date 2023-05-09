#include <bits/stdc++.h>
using namespace std;

string compress(string &s) {
    string ans = "";
    unordered_map<char, int> M;
    for (int i = 0; s[i]; i++) {
        if (M.find(s[i]) == M.end()) {
            M.insert(make_pair(s[i], 1));
        }

        else {
            M[s[i]]++;
        }
    }
    for (auto it : M) {
        cout << it.first << " " << it.second << endl;
    }
    for(auto it : M){
         if(s.find(it.first)<s.length()){
              ans += to_string(it.second);
              ans += it.first;
         }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    string s;
    cin >> s;
    string result = compress(s);
    cout << result;
    return 0;
}