#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s,  unsigned int i) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return checkPalindrome(s, i + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // string s = "madaa";
    // cout << checkPalindrome(s, 0);
    cout << "hello";
    return 0;
}