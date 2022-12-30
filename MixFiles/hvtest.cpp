#include <bits/stdc++.h>
using namespace std;

int activitySelection(int n,vector<int> &start,vector<int> &ending){
    vector<pair<int,int>> timing;
    for(int i=0;i<n;i++){
        pair<int,int> temp;
        temp.first = start[i];
        temp.second = ending[i];

        timing.push_back(temp);
    }
    sort(timing.begin(),timing.end());

    for(int i=0;i<n;i++){
        cout<<timing[i].first<<" "<<timing[i].second<<endl;
    }
    return 0;

}


int main(){
    int n;
    cin>>n;
    vector<int> start(n),ending(n);
    for(int i=0;i<n;i++)
    cin>>start[i]>>ending[i];
    cout<<endl<<endl;
    
    cout<<activitySelection(n,start,ending);
    return 0;
}