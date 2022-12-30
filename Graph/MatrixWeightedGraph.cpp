#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    //Graph being stored in form of matrix
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u][v] = wt;
        adj[v][u] = wt;
    }
    return 0;
}