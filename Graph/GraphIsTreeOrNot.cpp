#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int src, int prt, vector<vector<int>> &edges, vector<bool> &visited) {
    visited[src] = true;
    for (auto i : edges[src]) {
        if (!visited[i]) {
            if (isCyclic(i, src, edges, visited)) return true;
        }
        else if (i != prt) return true;
    }
    return false;
}

bool graphValidTree(int n, vector<vector<int>>& edges) {
    vector<bool> visited(n, false);
    int startingNode = 0;
    if (isCyclic(startingNode, -1, edges, visited)) return false;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) return false;
    }
    return true;
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, num;
    cin >> n >> num;
    vector<vector<int>>edges;
    while (num--)
    {
        int a, b;
        cin >> a;
        cin >> b;
        vector<int>temp;
        temp.push_back(1);
        temp.push_back(1);
        edges.push_back(temp);
    }
    cout << graphValidTree(n, edges) << endl;

}