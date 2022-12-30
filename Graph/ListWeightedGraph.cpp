#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    adj.push_back(make_pair(3,4));
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }
    cout<<adj[0].first;
    // for (auto p : adj)
    // {
    //     cout << p.first << " " << p.second << std::endl;
    // }
    // for(int i=0;i<adj->size;i++){
    //     cout<<adj[i].fir
    // }
    
    
}