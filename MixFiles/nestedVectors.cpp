#include<bits/stdc++.h>
using namespace std;
int main(){

    // Pairs of Vectors 
    int n;
    vector<pair<int, int>> p;
    cin >> n;
    for (int i = 0; i < 3;i++){
        int x, y;
        cin >> x >> y;
        p.push_back({x, y});
    }
    for (int i = 0; i < n;i++){
        cout << p[i].first << " " <<p[i].second;
        cout << endl;
    }

    // Array of Vectors
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N;i++){
        vector<int> temp;
        int x;
        cin >> x;
        for (j = 0; i < x;j++){
            int input;
            cin >> input;
            temp.push_back(input);
        }
    }

    for (int i = 0; i < N;i++){
        for (j = 0; j < v[i].size();j++){
            cout << [v[j]];
        }
    }
}