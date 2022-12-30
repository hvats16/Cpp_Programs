#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[] = {25,10,1, 2, 3, 3, 7, 8, 5, 4, 5};
    for (int i : A) {
        cout << i << " ";
    }
    set<int> s;
    for (int i : A) {
        s.insert(i);
    }
    cout << endl;
    for(auto it : s){
        cout << it << " ";
    }
}